#include <iostream>

using std::cout;
using std::endl;
using std::cin;

const int strsize = 32;
const int ArrSize = 5;
// Benevolent Order of Programmers name structure
struct bop {
    char fullname[strsize]; // real name
    char title[strsize]; // job title
    char bopname[strsize]; // secret BOP name
    int preference; // 0 = fullname, 1 = title, 2 = bopname
};
const bop arr_bop[ArrSize] = {
    {"Wimp Macho", "Senior Programmer", "WM", 0},
    {"Raki Rhodes", "Junior Programmer", "RR", 1},
    {"Celia Laiter", "Fish Programmer", "MIPS", 2},
    {"Hoppy Hipman", "Analyst Trainee", "HH", 1},
    {"Pat Hand", "Boss", "LOOPY", 2}
};

void display_by_name();
void display_by_title();
void display_by_bopname();
void display_by_preference();

int main()
{
    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name      b. display by title" << endl;
    cout << "c. display by bopname   d. display by preference" << endl;
    cout << "q. quit" << endl;

    cout << "Enter your choice: ";
    char choice;
    while(cin.get(choice) && choice != 'q')
    {
        while(cin.get() != '\n')
            continue;
        switch (choice){
        case 'a':
            display_by_name();
            break;
        case 'b':
            display_by_title();
            break;
        case 'c':
            display_by_bopname();
            break;
        case 'd':
            display_by_preference();
            break;
        default:
            cout << "Please enter character (a, b, c, d or q to quit)" << endl;
            break;
        }
        cout << "Next choice: ";
    }
    cout << "Bye!" << endl;

    return 0;
}

void display_by_name()
{
    for(int i = 0; i < ArrSize; i++)
        cout << arr_bop[i].fullname << endl;
}
void display_by_title()
{
    for(int i = 0; i < ArrSize; i++)
        cout << arr_bop[i].title << endl;
}
void display_by_bopname()
{
    for(int i = 0; i < ArrSize; i++)
        cout << arr_bop[i].bopname << endl;
}
void display_by_preference()
{
    for(int i = 0; i < ArrSize; i++)
    {
        switch (arr_bop[i].preference){
        case 0:
            cout << arr_bop[i].fullname << endl;
            break;
        case 1:
            cout << arr_bop[i].title << endl;
            break;
        case 2:
            cout << arr_bop[i].bopname << endl;
            break;
        default:
            cout << "unknown preference" << endl;
            break;
        }
    }
}
