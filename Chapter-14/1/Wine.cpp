#include "Wine.h"
using std::cout;
using std::endl;
using std::cin;

Wine::Wine(const char * l, int y, const int yr[], const int bot[])
    : name(l), num_years(y), data(ArrayInt(yr,y), ArrayInt(bot,y))
{
}

Wine::Wine(const char * l, int y)
    : name(l), num_years(y), data(ArrayInt(0,y), ArrayInt(0,y))
{
}

void Wine::GetBottles()
{
    cout << "Enter " << name << " data for " << num_years << " year(s): " << endl;
    for(int i = 0; i < num_years; i++)
    {
        cout << "Enter year: ";
        cin >> data.first()[i];
        cout << "Enter bottles for that year: ";
        cin >> data.second()[i];
    }
}

void Wine::Show() const
{
    cout << "Wine: " << name << endl;
    cout << "\t" << "Year" << "\t" << "Bottles" << endl; 
    for(int i = 0; i < num_years; i++)
        cout << "\t" << data.first()[i] << "\t" << data.second()[i] << endl;
}

