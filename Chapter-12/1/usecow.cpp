#include <iostream>
#include "cow.h"

int main()
{
    Cow cow1;   // default constructor
    cow1.ShowCow();

    Cow cow2("Peter", "leaf", 66.6); // Cow(const char*, const char*, double);
    cow2.ShowCow();

    Cow cow3(cow2); // Cow(const Cow &);
    cow3.ShowCow();

    cow1 = cow3; // Cow & operator=(Const Cow &);
    cow1.ShowCow();

    return 0;
}

