#include <iostream>
#include <cstring>
#include "1_golf.h"

using std::cin;
using std::cout;
using std::endl;

void setgolf(golf & g, const char * name, int hc){
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g){
    memset(g.fullname, 0, sizeof(g.fullname));
    cout << "Enter username: ";
    cin.getline(g.fullname, sizeof(g.fullname));
    if(strlen(g.fullname) == 0)
        return 0;
    cout << "Enter handicap: ";
    cin >> g.handicap;
    while(cin.get() != '\n')
        continue;

    return 1;
}

void handicap(golf & g, int hc){
    g.handicap = hc;
}

void showgolf(const golf & g){
    cout << "username: " << g.fullname << endl;
    cout << "handicap: " << g.handicap << endl;
}
