#ifndef COMP_H
#define COMP_H

#include <iostream>
#include <string.h>
#include <stdio.h>
#include "numbers.h"
#include "quaternion.h"

using namespace std;

class Comp : public Numbers
{
public:

Comp ();
Comp(double r);
Comp (double r, double i);
Comp(const Comp &c);
~Comp ();


virtual Numbers* operator+ (Numbers *c);
virtual Numbers* operator- (Numbers *c);
virtual Numbers* operator* (Numbers *c);
virtual Numbers* operator/ (Numbers *c);
virtual void show();
virtual int getType();

};

#endif // COMP_H
