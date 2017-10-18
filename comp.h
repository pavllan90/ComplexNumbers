#ifndef COMP_H
#define COMP_H

#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

class Comp
{
public:

Comp ();
Comp(double r);
Comp (double r, double i);
Comp(const Comp &c);
~Comp ();


Comp sum (const Comp &c);
Comp sub (const Comp &c);
Comp mult (const Comp &c);
Comp div (const Comp &c);
void show();

double re, im;
};

#endif // COMP_H
