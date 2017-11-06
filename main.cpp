#include "Comp.h"
#include <iostream>
#include <cmath>
#include "stack.h"
#include <cassert>
#include <QApplication>
#include "quaternion.h"
#include "mainwindow.h"

using namespace std;

int main(int argc, char *argv[])
{

//    Quaternion *a = new Quaternion (4,5, 6, 7);
//    Comp *b = new Comp (4,-5);
//    Stack st_test;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
//    st_test.push(a,"=");
//    st_test.push(b, "+");
//    st_test.push(b, "+");
//    st_test.push(b, "+");
//    st_test.push(b, "+");
//    st_test.push(b, "+");

//    Stack stack;

//    Numbers* c = (*b+a);
//    c->show();
//    qDebug("%s", st_test.get_string().toLatin1().data());
    return a.exec();
    }

