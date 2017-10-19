#include "stack.h"
#include <time.h>
#include <stdlib.h>

Stack::Stack()
{
    stack_size = 0;
    first = NULL;
}

Stack::Stack(const Stack &copy)
{
    stack_size = 0;
    first = NULL;
    Node* temp = copy.first;
    int el = copy.stack_size;
    while(el>0)
    {
        for(int i = 0; i < el-1; i++) temp = temp->next;
        push(temp->data, op_to_str(temp));
        temp = copy.first;
        el-=1;
    }
}

QString Stack::sign_to_string(Node *a)
{
    switch (a->sign)
    {
    case pl:
        return "+";
        break;
    case mi:
        return "-";
        break;
    case di:
        return "/";
        break;
    case mu:
        return "*";
        break;
    }
}

void Stack::show()
{
    Node *temp = first;
    while(temp)
    {
        temp->data.show();
        cout<<" "<<sign_to_string(temp).toLatin1().data()<<endl;
        temp = temp->next;
    }
}

void Stack::save_to_file(QString name)
{
    QFile file;
    file.setFileName(name);
    file.open(QIODevice::WriteOnly);
    QDataStream stream(&file);
    for(Node* temp = first; temp; temp=temp->next)
    {
        stream<<QString::number(temp->data.re)<<QString::number(int(temp->data.im))<<sign_to_string(temp);
    }
    file.close();
}

void Stack::load_from_file(QString name)
{
    QFile file;
    file.setFileName(name);
    file.open(QIODevice::ReadOnly);
    QDataStream stream(&file);
    while(!file.atEnd())
    {
        QString _re ;
        QString _im ;;
        QString _sign;
        stream>>_re>>_im>>_sign;
        Comp a(_re.toDouble(),_im.toDouble());
        push(a, _sign);
    }
    file.close();
}

Comp &Stack::get_First()
{
    return (first->data);
}

QString Stack::get_string()
{
    QString res = "";
    for(Node* temp = first; temp; temp=temp->next)
    {
        res+="("+QString::number(temp->data.re);
        res+= temp->data.im >= 0 ? "+i"+QString::number(temp->data.im) : "-i"+QString::number(-(temp->data.im));
        res+=")";
        if(temp->next)
        {
            res+=" "+sign_to_string(temp)+" ";
        }
        else
        {
            res+=" = "+QString::number(result().re);
            res+=result().im>=0 ? "+i" + QString::number(result().im) : "-i" + QString::number(-result().im);
        }
    }
    return res;
}

QString Stack::op_to_str(Node* a)
{
    if(a->sign == pl) return "+";
    if(a->sign == mi) return  "-";
    if(a->sign == mu) return "*";
    if(a->sign == di) return "/";
}

int Stack::size()
{
    return stack_size;
}

bool Stack::is_Empty()
{
    if(first) return false;
    else return true;
}

void Stack::push(Comp a, QString _sign)
{
    Node *temp = new Node;
    temp->data = a;
    temp->sign = str_to_op(_sign);
    stack_size+=1;
    if(!first) first = temp;
    else temp->next = first, first = temp;
}

Comp Stack::result()
{
    Node* temp = first;
    Stack mult_div;
    Comp _result;
    while(temp)
    {
        switch (temp->sign)
        {
        case di:
        {
            Node* temp2 = temp;
            Comp _mid_res  = temp2->data;
            while(temp2&&temp2->next&&(temp2->sign==di||temp2->sign==mu))
            {
                if(temp2->sign==di) _mid_res=_mid_res.div(temp2->next->data);
                else _mid_res = _mid_res.mult(temp2->next->data);
                temp2 = temp2->next;
            }
            mult_div.push(_mid_res, "+");
            temp = temp2;
        }
            break;
        case mu:
        {
            Node* temp2 = temp;
            Comp _mid_res = temp2->data;
            while(temp2&&temp2->next&&(temp2->sign==di||temp2->sign==mu))
            {
                if(temp2->sign==di) _mid_res=_mid_res.div(temp2->next->data);
                else _mid_res = _mid_res.mult(temp2->next->data);
                temp2 = temp2->next;
            }
            mult_div.push(_mid_res, "+");
            temp = temp2->next;
        }
            break;
        default:
             mult_div.push(temp->data, sign_to_string(temp)), temp = temp->next;;
        }

    }
    temp = mult_div.first;
    while(temp)
    {
        switch (temp->sign)
        {
        case pl:
            _result = _result.sum(temp->data);
            break;
        case mi:
            _result = _result.sub(temp->data);
            break;
        }
        temp = temp->next;
    }
    return _result;
}

Operations Stack::str_to_op(QString a)
{
    if(a=="+") return pl;
    if(a=="-") return mi;
    if(a=="*") return mu;
    if(a=="/") return di;
}

Comp Stack::pop()
{
    if(first)
    {
        Node *temp = first;
        Comp ret = first->data;
        if(first->next)
        {
            first = first->next;
            delete temp;
        }
        else
        {
            delete first;
            first = NULL;
        }
        stack_size-=1;
        return ret;
    }
}
