#include "Comp.h"
#include <iostream>
#include "math.h"


Comp::Comp ()
{
  re=0;
  im=0;
}

Comp::Comp (double r)
{
    re = r;
    im = 0;
}

Comp::Comp (double r, double i)
{
    re = r;
    im = i;
}

Comp::Comp (const Comp &c)
{
    re = c.re;
    im = c.im;
}
Comp::~Comp ()
{

}



Comp Comp::sum (const Comp &c)
{
    Comp t;
    t.re=re+c.re;
    t.im=im+c.im;
    return t;
}


 Comp Comp::sub (const Comp &c)
 {
 Comp t;
 t.re= re - c.re;
 t.im= im - c.im ;
 return t;
 }
Comp Comp::mult (const Comp &c)
{
Comp t;
t.re= re * c.re - im * c.im;
t.im= re * c.im + im * c.re ;
return t;
}

Comp Comp::div (const Comp &c)
{
Comp t;

double r = c.re * c.re + c.im * c.im;
t.re= (re * c.re + im * c.im) / r;
t.im= (im * c.re - re * c.im) / r;
return t;
}
void Comp::show()
{
cout<< re << " + i*(";
cout<< im <<")"<<endl;
}
