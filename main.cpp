#include "Comp.h"
#include <iostream>
#include <cmath>
#include "stack.h"
#include <cassert>

using namespace std;

int main(int argc, char *argv[])
{
    Comp a (4,5), b (4,-5);
    Stack st_test;
    Stack stack;

    assert(stack.size()==0&&stack.is_Empty());
    stack.push(Comp(3,3), "+");
    assert(stack.size()==1&&!stack.is_Empty());
    stack.push(a, "+");
    assert(stack.get_First().im==a.im&&stack.get_First().re == a.re);
    stack.push(b, "/");
    stack.push(Comp(2,3), "+");
    stack.push(Comp(4,1), "+");
    stack.push(Comp(1,12), "*");
    stack.push(Comp(3,2), "/");
    stack.push(Comp(-11,22), "-");
    st_test.push(Comp(6,3), "+");
    st_test.push(Comp(6,-3), "*");
    st_test.push(Comp(5,-2), "+");
    st_test.push(Comp(5,2), "*");
    st_test.push(Comp(4,-1), "*");
    st_test.push(Comp(4,1), "*");
    qDebug("%s", st_test.get_string().toLatin1().data());
return 0;
    }

