#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <QFile>
#include <QDataStream>
#include "comp.h"
#include "quaternion.h"

enum Operations
{
    pl, mi, di, mu
};

class Stack
{
public:
    struct Node
    {
        Node(){next=NULL;}
        Node *next;
        Numbers *data;
        Operations sign;
    };
    Stack();
    Stack(const Stack &copy);
    Numbers* get_First();
    void push(Numbers *a, QString _sign);
    Numbers* pop();
    int size();
    bool is_Empty();
    void show();
    void save_to_file(QString name);
    void load_from_file(QString name);
    QString op_to_str(Node *a);
    Operations str_to_op(QString a);
    QString get_string();
    Numbers *result();
    Node *first;
private:

    int stack_size;
    QString sign_to_string(Node* a);

};

#endif // STACK_H
