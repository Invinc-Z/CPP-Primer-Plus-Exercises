#include <iostream>
#include "VintagePort.h"

int main()
{
    Port p1;
    Port p2("A", "tawny", 1);
    p2.Show();
    std::cout << p2 << std::endl;
    std::cout << "-------------------------" << std::endl;

    Port* pp;
    VintagePort vp("B", 2, "bb", 1999);
    pp = &vp;
    pp->Show();
    std::cout << *pp << std::endl;
    std::cout << vp << std::endl;

    return 0;
}

