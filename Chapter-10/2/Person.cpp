#include <iostream>
#include <cstring>
#include "Person.h"

using std::cout;
using std::endl;

Person::Person(const string & ln, const char * fn /*= "Heyyou"*/)
{
    lname = ln;
    strncpy(fname, fn, LIMIT-1);
    fname[LIMIT-1] = '\0';
}

void Person::Show() const
{
    cout << fname << " " << lname << endl;
}

void Person::FormalShow() const
{
    cout << lname << ", " << fname << endl;
}

