#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton_18, SIGNAL(clicked()), this, SLOT(count()));
    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(enter0()));
    QObject::connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(enter1()));
    QObject::connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(enter2()));
    QObject::connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(enter3()));
    QObject::connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(enter4()));
    QObject::connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(enter5()));
    QObject::connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(enter6()));
    QObject::connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(enter7()));
    QObject::connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(enter8()));
    QObject::connect(ui->pushButton_10, SIGNAL(clicked()), this, SLOT(enter9()));
    QObject::connect(ui->pushButton_14, SIGNAL(clicked()), this, SLOT(enterpl()));
    QObject::connect(ui->pushButton_15, SIGNAL(clicked()), this, SLOT(entermi()));
    QObject::connect(ui->pushButton_16, SIGNAL(clicked()), this, SLOT(enterdi()));
    QObject::connect(ui->pushButton_17, SIGNAL(clicked()), this, SLOT(entermu()));
    QObject::connect(ui->pushButton_19, SIGNAL(clicked()), this, SLOT(enter_left()));
    QObject::connect(ui->pushButton_20, SIGNAL(clicked()), this, SLOT(enter_right()));
    QObject::connect(ui->pushButton_11, SIGNAL(clicked()), this, SLOT(enter_i()));
    QObject::connect(ui->pushButton_12, SIGNAL(clicked()), this, SLOT(enter_j()));
    QObject::connect(ui->pushButton_13, SIGNAL(clicked()), this, SLOT(enter_k()));
    QObject::connect(ui->pushButton_21, SIGNAL(clicked()), this, SLOT(size()));
    QObject::connect(ui->pushButton_22, SIGNAL(clicked()), this, SLOT(is_empty()));
    QObject::connect(ui->pushButton_23, SIGNAL(clicked()), this, SLOT(show_s()));
    QObject::connect(ui->pushButton_24, SIGNAL(clicked()), this, SLOT(save()));
    QObject::connect(ui->pushButton_25, SIGNAL(clicked()), this, SLOT(load()));
}

void MainWindow::size()
{
    ui->label_3->setText("Size is "+QString::number(stack.size()));
}

void MainWindow::is_empty()
{
    if(stack.is_Empty()) ui->label_3->setText("Empty");
    else ui->label_3->setText("Not empty");
}

void MainWindow::show_s()
{
    ui->label_3->setText(stack.get_string());
}

void MainWindow::load()
{
    stack.load_from_file(ui->lineEdit_2->text());
}

void MainWindow::save()
{
    stack.save_to_file(ui->lineEdit_2->text());
}

void MainWindow::enter_i()
{
    QString temp = ui->lineEdit->text();
    temp+="i";
    ui->lineEdit->setText(temp);
}

void MainWindow::enter_j()
{
    QString temp = ui->lineEdit->text();
    temp+="j";
    ui->lineEdit->setText(temp);
}

void MainWindow::enter_k()
{
    QString temp = ui->lineEdit->text();
    temp+="k";
    ui->lineEdit->setText(temp);
}

void MainWindow::enter0()
{
    QString temp = ui->lineEdit->text();
    temp+="0";
    ui->lineEdit->setText(temp);
}

void MainWindow::enter1()
{
    QString temp = ui->lineEdit->text();
    temp+="1";
    ui->lineEdit->setText(temp);
}

void MainWindow::enter2()
{
    QString temp = ui->lineEdit->text();
    temp+="2";
    ui->lineEdit->setText(temp);
}

void MainWindow::enter3()
{
    QString temp = ui->lineEdit->text();
    temp+="3";
    ui->lineEdit->setText(temp);
}

void MainWindow::enter4()
{
    QString temp = ui->lineEdit->text();
    temp+="4";
    ui->lineEdit->setText(temp);
}

void MainWindow::enter5()
{
    QString temp = ui->lineEdit->text();
    temp+="5";
    ui->lineEdit->setText(temp);
}

void MainWindow::enter6()
{
    QString temp = ui->lineEdit->text();
    temp+="6";
    ui->lineEdit->setText(temp);
}

void MainWindow::enter7()
{
    QString temp = ui->lineEdit->text();
    temp+="7";
    ui->lineEdit->setText(temp);
}

void MainWindow::enter8()
{
    QString temp = ui->lineEdit->text();
    temp+="8";
    ui->lineEdit->setText(temp);
}

void MainWindow::enter9()
{
    QString temp = ui->lineEdit->text();
    temp+="9";
    ui->lineEdit->setText(temp);
}

void MainWindow::enterpl()
{
    QString temp = ui->lineEdit->text();
    temp+="+";
    ui->lineEdit->setText(temp);
}

void MainWindow::entermi()
{
    QString temp = ui->lineEdit->text();
    temp+="-";
    ui->lineEdit->setText(temp);
}

void MainWindow::entermu()
{
    QString temp = ui->lineEdit->text();
    temp+="*";
    ui->lineEdit->setText(temp);
}

void MainWindow::enterdi()
{
    QString temp = ui->lineEdit->text();
    temp+="/";
    ui->lineEdit->setText(temp);
}

void MainWindow::enter_left()
{
    QString temp = ui->lineEdit->text();
    temp+="(";
    ui->lineEdit->setText(temp);
}

void MainWindow::enter_right()
{
    QString temp = ui->lineEdit->text();
    temp+=")";
    ui->lineEdit->setText(temp);
}

void MainWindow::count()
{
    substrs = ui->lineEdit->text();
    QStringList list = substrs.split(")");
    qDebug("%s", list.at(1).toLatin1().data());
    Stack temp;
    for(int i = 0; i<list.size(); i++)
    {
        if(!list.at(i).contains("j")&&!list.at(i).contains("k")&&list.at(i).length()>2)
        {
            bool f = true;
            int j = 1;
            while(j<list.at(i).size()&&!list.at(i).at(j).isDigit()&&list.at(i).at(j)!='-') j+=1;
            QString re;
            if(list.at(i).at(j)=='-') re = "-", j+=1;
            else re = "";

            for(;j<list.at(i).size()&& (list.at(i).at(j).isDigit()||list.at(i).at(j)=='.'); j++) re += QString(list.at(i).at(j));
            QString im1;
            if(list.at(i).at(j)=='-') im1 = "-";
            else im1 = "";
             j+=1;
            //QString mid_sign = "-";
            //j+=1;
            for(;j<list.at(i).size()&& (list.at(i).at(j).isDigit()||list.at(i).at(j)=='.'||list.at(i).at(j)=='-'); j++) im1+=list.at(i).at(j);
           // re.toDouble(&f);
            if(i<list.size()-1&&list.at(i+1).size()>=2)
              temp.push(new Comp(re.toDouble(), im1.toDouble()), QString(list.at(i+1).at(0)));
            else
              temp.push(new Comp(re.toDouble(), im1.toDouble()), "+");
        }
        else if(list.at(i).length()>2)
        {
            int j = 1;
            while(j<list.at(i).size()&&!list.at(i).at(j).isDigit()&&list.at(i).at(j)!='-') j+=1;

            QString re;
            if(list.at(i).at(j)=='-') re = "-", j+=1;
            else re = "";
            for(;j<list.at(i).size()&& (list.at(i).at(j).isDigit()||list.at(i).at(j)=='.'); j++) re += QString(list.at(i).at(j));

            QString im1;
            if(list.at(i).at(j)=='-') im1 = "-";
            else im1 = "+";
            j+=1;
            for(;j<list.at(i).size()&& (list.at(i).at(j)!='i'/*list.at(i).at(j).isDigit()||list.at(i).at(j)=='.'||list.at(i).at(j)!='-'*/); j++) im1+=list.at(i).at(j);

            QString im2;
            if(list.at(i).at(j)=='-') im2 = "-";
            else im2 = "";
            j+=1;
            for(;j<list.at(i).size()&& (list.at(i).at(j)!='j'/*list.at(i).at(j).isDigit()||list.at(i).at(j)=='.'||list.at(i).at(j)!='-'*/); j++) im2+=list.at(i).at(j);

            QString im3;
            if(list.at(i).at(j)=='-') im3 = "-";
            else im3 = "";
             j+=1;
            for(;j<list.at(i).size()&& (list.at(i).at(j)!='k'/*list.at(i).at(j).isDigit()||list.at(i).at(j)=='.'||list.at(i).at(j)!='-'*/); j++) im3+=list.at(i).at(j);

            if(i<list.size()-1&&list.at(i+1).size()>=2)
              temp.push(new Quaternion(re.toDouble(), im1.toDouble(), im2.toDouble(), im3.toDouble()), QString(list.at(i+1).at(0)));
            else
              temp.push(new Quaternion(re.toDouble(), im1.toDouble(), im2.toDouble(), im3.toDouble()), "+");
        }
    }

    Stack::Node* a = temp.first;
    while (a) stack.push(a->data, temp.op_to_str(a)), a = a->next;
    stack.show();
    ui->label_2->setText("="+stack.get_string());
}

MainWindow::~MainWindow()
{
    delete ui;
}
