#include <iostream>
#include <cstring>
#include "Golf.h"

using std::cin;
using std::cout;
using std::endl;

Golf::Golf(const char * name /*= "null"*/, int hc /*= 0*/)
{
    strncpy(fullname, name, Len - 1);
    fullname[Len - 1] = '\0';
    handicap = hc;
}

bool Golf::setGolf()
{
    char name[Len] = {0};
    int hc = 0;
    cout << "Enter username: ";
    cin.getline(name, Len);
    if(strlen(name) == 0)
        return 0;
    cout << "Enter handicap: ";
    cin >> hc;
    while(cin.get() != '\n')
        continue;

    *this = Golf(name, hc);

    return 1;
}

void Golf::setHandicap(int hc)
{
    handicap = hc;
}

void Golf::showGolf() const
{
    cout << "username: " << fullname << endl;
    cout << "handicap: " << handicap << endl;
}
