#include "Comp.h"
#include <iostream>
#include <cmath>
#include "stack.h"
#include <cassert>

using namespace std;

int main(int argc, char *argv[])
{
    Comp a (-4, 5), b (-7, 4);
    Comp c = a.sum(b);
    Comp d = a.sub(b);
    Comp e = a.mult(b);
    Comp f = a.div(b);

    cout<<"Digit #1 " ;
    a.show();
    cout<< "Digit #2  " ;
    b.show();
    cout<< endl ;
    cout<<"Sum = ";
    c.show();
    cout<<"Subtract  = ";
    d.show();
    cout<<"Multiplication = ";
    e.show();
    cout<<"Division = ";
    f.show();
    Stack stack;
    assert(stack.size()==0&&stack.is_Empty());
    stack.push(a);
    assert(stack.size()==1&&!stack.is_Empty());
    stack.push(d);

    stack.push(c);
    stack.push(e);
    stack.push(f);
    stack.show();

return 0;
    }

