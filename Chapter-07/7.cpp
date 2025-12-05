#include <iostream>

using std::cout;
using std::cin;
using std::endl;
const int Max = 5;

double* fill_array(double* begin, double* end);
void show_array(const double* begin, const double* end); // don't change data
void revalue(double r, double* begin, double* end);

int main()
{
    double properties[Max];
    double* properties_end = fill_array(properties, properties + Max);
    show_array(properties, properties_end);
    if (properties_end)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor)) // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, properties_end);
        show_array(properties, properties_end);
    }
    cout << "Done.\n";

    return 0;
}

double* fill_array(double* begin, double* end)
{
    double* curr;
    int i = 0;
    for (curr = begin; curr != end; curr++)
    {
        cout << "Enter value #" << ++i << ": ";
        cin >> *curr;
        if (!cin) // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (*curr < 0) // signal to terminate
            break;
    }
    return curr;
}
// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double* begin, const double* end)
{
    int i = 0;
    while(begin != end)
    {
        cout << "Property #" << ++i << ": $";
        cout << *begin++ << endl;
    }
}

void revalue(double r, double* begin, double* end)
{
    while(begin != end)
        *begin++ *= r;
}
