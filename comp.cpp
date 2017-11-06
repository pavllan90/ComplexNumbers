#include "comp.h"
#include <iostream>
#include "math.h"


Comp::Comp ()
{
  re=0;
  im1=0;
}

Comp::Comp (double r)
{
    re = r;
    im1 = 0;
}

Comp::Comp (double r, double i)
{
    re = r;
    im1 = i;
}

Comp::Comp (const Comp &c)
{
    re = c.re;
    im1 = c.im1;
}
Comp::~Comp ()
{

}



Numbers* Comp::operator + (Numbers *c)
{
    if(c->getType()==0)
    {
        return new Comp(re+c->re, im1+c->im1);
    }
    else
    {
        return new Quaternion(re+c->re, im1+c->im1, dynamic_cast<Quaternion*>(c)->im2,dynamic_cast<Quaternion*>(c)->im3);
    }
}


Numbers* Comp::operator - (Numbers *c)
{
    if(c->getType()==0)
        return new Comp(re - c->re, im1 - c->im1);
    else
        return new Quaternion(re-c->re, im1-c->im1, -dynamic_cast<Quaternion*>(c)->im2, -dynamic_cast<Quaternion*>(c)->im3);
}
 Numbers* Comp::operator * (Numbers *a)
{
     Quaternion *b = dynamic_cast<Quaternion*>(a);
     if(a->getType()==0)
         return new Comp((re*a->re-im1*a->im1), (re*a->im1+a->re*im1));
     else
         return new Quaternion((b->re*re-b->im1*im1), (b->re*im1+re*b->im1), (re*b->im2+im1*b->im3), (re*b->im3-b->im2*im1));
}

int Comp::getType()
{
     return 0;
}

Numbers* Comp::operator /(Numbers *c)
{

    if(c->getType()==0)
    {
            double r = c->re * c->re + c->im1 * c->im1;
            return new Comp((re * c->re + im1 * c->im1) / r, (im1 * c->re - re * c->im1) / r);
    }
    else
    {
        Quaternion *temp = dynamic_cast<Quaternion*>(c);
        Comp ch(re,im1);
        Quaternion *zn = new Quaternion(temp->re, -temp->im1, -temp->im2, -temp->im3);
        zn = dynamic_cast<Quaternion*>(ch*zn);
        double num = temp->re*temp->re+temp->im1*temp->im1+temp->im2*temp->im2+temp->im3*temp->im3;
        return new Quaternion(zn->re/num, zn->im1/num, zn->im2/num, zn->im3/num);
    }
}
void Comp::show()
{
cout<< re << " + i*(";
cout<< im1 <<")"<<endl;
}
