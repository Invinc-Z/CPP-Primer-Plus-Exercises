#include <iostream>
#include <cstring>
#include "cow.h"
using std::cout;
using std::endl;

Cow::Cow()
{
    strcpy(name, "cow");

    int len = strlen("eat");
    hobby = new char[len + 1];
    strcpy(hobby, "eat");

    weight = 0;
    cout << "Cow() is called." << endl;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
    strncpy(name, nm, 19);
    name[19] = '\0';

    int len = strlen(ho);
    hobby = new char[len + 1];
    strcpy(hobby, ho);

    weight = wt;
    cout << "Cow(const char*, const char*, double) is called." << endl;
}

Cow::Cow(const Cow & c)
{
    strcpy(name, c.name);

    int len = strlen(c.hobby);
    hobby = new char[len + 1];
    strcpy(hobby, c.hobby);

    weight = c.weight;
    cout << "Cow(const Cow &) is called." << endl;
}

Cow::~Cow()
{
    delete [] hobby;
    hobby = nullptr;
    cout << "~Cow() is called." << endl;
}

Cow& Cow::operator=(const Cow & c)
{
    strcpy(name, c.name);

    delete [] hobby;
    int len = strlen(c.hobby);
    hobby = new char[len + 1];
    strcpy(hobby, c.hobby);

    weight = c.weight;
    cout << "Cow& operator=(const Cow&) is called." << endl;

    return *this;
}

void Cow::ShowCow() const 
{
    cout << "Cow's name: " << name << endl;
    cout << "Cow's hobby: " << hobby << endl;
    cout << "Cow's weight: " << weight << endl; 
}
