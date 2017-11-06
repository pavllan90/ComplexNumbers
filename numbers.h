#ifndef NUMBERS_H
#define NUMBERS_H

class Numbers
{
public:
    Numbers();
    Numbers(double _re, double _im1);
    virtual Numbers* operator+ (Numbers *c);
    virtual Numbers* operator- (Numbers *c);
    virtual Numbers* operator* (Numbers *c);
    virtual Numbers* operator/ (Numbers *c);
    virtual void show();
    virtual int getType();
    double re, im1;
};

#endif // NUMBERS_H
