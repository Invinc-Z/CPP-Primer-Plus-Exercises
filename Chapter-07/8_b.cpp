#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// constant data
const int Seasons = 4;
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
struct Expenses{
    double expenses[Seasons];
};

void fill(Expenses* ex);
void show(const Expenses* ex);

int main()
{
    Expenses ex;
    fill(&ex);
    show(&ex);

    return 0;
}
void fill(Expenses* ex)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> ex->expenses[i];
    }
}
void show(const Expenses* ex)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << ex->expenses[i] << endl;
        total += ex->expenses[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
