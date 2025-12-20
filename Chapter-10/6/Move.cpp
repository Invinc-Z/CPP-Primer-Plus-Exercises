#include <iostream>
#include "Move.h"

using std::cout;
using std::endl;

Move::Move(double a /*= 0*/, double b /*= 0*/) // sets x, y to a, b
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    cout << "x = " << x << ", y = " << y << endl;
}

Move Move::add(const Move & m) const
{
    Move temp;
    temp.x = x + m.x;
    temp.y = y + m.y;

    return temp;
}

void Move::reset(double a /*= 0*/, double b /*= 0*/)
{
    x = a;
    y = b;
}

