#include "quaternion.h"

Quaternion::Quaternion() : Numbers(0,0), im2(0), im3(0) { }

Quaternion::Quaternion(double _re, double _im1, double _im2, double _im3) : Numbers(_re, _im1), im2(_im2), im3(_im3) { }

Quaternion::Quaternion(const Quaternion &a)
{
    re = a.re;
    im1 = a.im1;
    im2 = a.im2;
    im3 = a.im3;
}

Quaternion* Quaternion::operator +(Numbers* a)
{
    if(a->getType()==0) return new Quaternion(re+a->re, im1+a->im1, im2, im3);
    else  return new Quaternion(re+a->re, im1+a->im1, im2+dynamic_cast<Quaternion*>(a)->im2, im3+dynamic_cast<Quaternion*>(a)->im3);
}

Quaternion* Quaternion::operator -(Numbers* a)
{
    if(a->getType()==0) return new Quaternion(re-a->re, im1-a->im1, -im2, -im3);
    else  return new Quaternion(re-a->re, im1-a->im1, im2-dynamic_cast<Quaternion*>(a)->im2, im3-dynamic_cast<Quaternion*>(a)->im3);
}

Quaternion* Quaternion::operator *(Numbers* a)
{
    Quaternion *b = dynamic_cast<Quaternion*>(a);
    if(a->getType()==0) return new Quaternion((re*a->re-im1*a->im1), (re*a->im1+a->re*im1), (a->re*im2+a->im1*im3), (a->re*im3-im2*a->im1));
    else
         return new Quaternion((re*b->re-im1*b->im1-im2*b->im2-im3*b->im3), (re*b->im1+b->re*im1+im2*b->im3-b->im2*im3), (re*b->im2+b->re*im2+b->im1*im3-im1*b->im3), (b->re*im3-im2*b->im1+re*b->im3-im1*b->im2));
}

Quaternion* Quaternion::operator /(Numbers* a)
{

    if(a->getType()==0)
    {
        Comp *ch1 = new Comp(a->re, -a->im1);
        Quaternion *ch2 = new Quaternion (re, im1,im2,im3);
        double num = a->re*a->re+a->im1*a->im1;
        Quaternion *temp = *ch2*ch1;
        return new Quaternion(temp->re/num, temp->im1/num, temp->im2/num, temp->im3/num);
    }
    else
    {
        Quaternion *temp = dynamic_cast<Quaternion*>(a);
        Quaternion ch(re,im1,im2,im3);
        Quaternion *zn = new Quaternion(temp->re, -temp->im1, -temp->im2, -temp->im3);
        zn = ch*zn;
        double num = temp->re*temp->re+temp->im1*temp->im1+temp->im2*temp->im2+temp->im3*temp->im3;
        return new Quaternion(zn->re/num, zn->im1/num, zn->im2/num, zn->im3/num);
    }
}

Quaternion::~Quaternion()
{

}

int Quaternion::getType()
{
    return 1;
}

void Quaternion::show()
{
    cout<<re<<" + i*("<<im1<<") + j*("<<im2<<") + k*("<<im3<<")"<<endl;
}
