#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <QFile>
#include <QDataStream>
#include "comp.h"

class Stack
{
public:
    struct Node
    {
        Node(){next=NULL;}
        Node *next;
        Comp data;
    };
    Stack();
    Stack(const Stack &copy);
    Comp& get_First();
    void push(Comp a);
    Comp pop();
    int size();
    bool is_Empty();
    void show();
    void save_to_file(QString name);
    void load_from_file(QString name);
    float selfIndex();
private:
    Node *first;
    int stack_size;
};

#endif // STACK_H
