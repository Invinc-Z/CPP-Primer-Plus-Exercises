#include <iostream>
#include "Plorg.h"

using std::cout;
using std::endl;

int main()
{
    Plorg p;
    p.showInfo();
    cout << endl;

    Plorg p2("P2", 88);
    p2.showInfo();
    cout << endl;

    p.setCI(66);
    p.showInfo();

    return 0;
}

