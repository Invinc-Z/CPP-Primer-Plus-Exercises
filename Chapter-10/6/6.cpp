#include <iostream>
#include "move.h"

using std::cout;
using std::endl;

int main()
{
    Move m1;
    cout << "m1: ";
    m1.showmove();

    Move m2(1, 2);
    cout << "m2: ";
    m2.showmove();

    m1.reset(3, 4);
    cout << "reset m1: ";
    m1.showmove();

    Move m3 = m1.add(m2);
    cout << "m3 = m1 + m2: ";
    m3.showmove();

    return 0;
}

