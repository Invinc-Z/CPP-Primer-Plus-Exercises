#include <iostream>
#include <cstring> // for strlen(), strcpy()

using std::cout;
using std::cin;
using std::endl;

struct stringy {
    char * str; // points to a string
    int ct; // length of string (not counting '\0')
};
// prototypes for set(), show(), and show() go here
void set(stringy& stry, const char* str);
void show(const stringy& stry, int n = 1);
void show(const char* str, int n = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing); // first argument is a reference,
                         // allocates space to hold copy of testing,
                         // sets str member of beany to point to the
                         // new block, copies testing to new block,
                         // and sets ct member of beany
    show(beany); // prints member string once
    show(beany, 2); // prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing); // prints testing string once
    show(testing, 3); // prints testing string thrice
    show("Done!");

    delete [] beany.str;
    return 0;
}
void set(stringy& stry, const char* str)
{
    int len = strlen(str);
    stry.str = new char[len + 1];
    strcpy(stry.str, str);
    stry.ct = len;
}
void show(const stringy& stry, int n)
{
    for(int i = 0; i < n; i++)
        cout << stry.str << endl;
}
void show(const char* str, int n)
{
    for(int i = 0; i < n; i++)
        cout << str << endl;
}
