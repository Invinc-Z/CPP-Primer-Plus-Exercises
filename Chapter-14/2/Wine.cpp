#include "Wine.h"
using std::cout;
using std::endl;
using std::cin;

Wine::Wine(const char * l, int y, const int yr[], const int bot[])
    : string(l), num_years(y), PairArray(ArrayInt(yr,y), ArrayInt(bot,y)) 
{
}

Wine::Wine(const char * l, int y)
    : string(l), num_years(y), PairArray(ArrayInt(0,y), ArrayInt(0,y))
{
}

void Wine::GetBottles()
{
    cout << "Enter " << (const string&)*this << " data for " << num_years << " year(s): " << endl;
    for(int i = 0; i < num_years; i++)
    {
        cout << "Enter year: ";
        cin >> ((PairArray&)*this).first()[i];
        cout << "Enter bottles for that year: ";
        cin >> ((PairArray&)*this).second()[i];
    }
}

void Wine::Show() const
{
    cout << "Wine: " << (const string&)*this << endl;
    cout << "\t" << "Year" << "\t" << "Bottles" << endl; 
    for(int i = 0; i < num_years; i++)
        cout << "\t" << ((const PairArray&)*this).first()[i] << "\t" << ((const PairArray&)*this).second()[i] << endl;
}

