#ifndef QUATERNION_H
#define QUATERNION_H

#include "numbers.h"
#include "comp.h"

class Quaternion : public Numbers
{
public:
    Quaternion();
    Quaternion(double _re, double _im1, double _im2, double _im3);
    Quaternion(const Quaternion& a);
    ~Quaternion();
    virtual int getType();
    virtual Quaternion* operator +(Numbers* a);
    virtual Quaternion* operator -(Numbers* a);
    virtual Quaternion* operator *(Numbers* a);
    virtual Quaternion* operator /(Numbers* a);
    virtual void show();


    double im2, im3;
};

#endif // QUATERNION_H
