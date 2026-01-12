#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

Person::~Person() 
{
}

void Person::Show() const
{
    Data();
}

void Person::Set()
{
    Get();
}

void Person::Data() const
{
    cout << "first name: " << first_name << endl;
    cout << "last name: " << last_name << endl;
}

void Person::Get()
{
    cout << "Enter person's first name: ";
    getline(cin, first_name);
    cout << "Enter person's last name: ";
    getline(cin, last_name);
}
