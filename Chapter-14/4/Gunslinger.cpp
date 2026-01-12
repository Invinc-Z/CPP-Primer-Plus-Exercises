#include "Gunslinger.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void Gunslinger::Show() const
{
    cout << "Gunslinger's Info: " << endl;
    Person::Data();
    Data();
}
void Gunslinger::Set()
{
    cout << "Gunslinger's Setup" << endl; 
    Person::Get();
    Get();
}

void Gunslinger::Data() const
{
    cout << "draw time: " << draw_time << endl;
    cout << "number of notches: " << notches << endl;
}

void Gunslinger::Get()
{
    cout << "Enter the draw time: ";
    cin >> draw_time;
    cout << "Enter the number of notches: ";
    cin >> notches;
    while(cin.get() != '\n')
        continue;
}

