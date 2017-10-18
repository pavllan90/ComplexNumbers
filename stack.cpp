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
        push(temp->data);
        temp = copy.first;
        el-=1;
    }
}

void Stack::show()
{
    Node *temp = first;
    while(temp)
    {
        temp->data.show();
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
        stream<<QString::number(temp->data.re)<<QString::number(int(temp->data.im));
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
        QString _im ;
        stream>>_re>>_im;
        Comp a(_re.toDouble(),_im.toDouble());
        push(a);
    }
    file.close();
}

Comp &Stack::get_First()
{
    return (first->data);
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

void Stack::push(Comp a)
{
    Node *temp = new Node;
    temp->data = a;
    stack_size+=1;
    if(!first) first = temp;
    else temp->next = first, first = temp;
}

float Stack::selfIndex()
{

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
