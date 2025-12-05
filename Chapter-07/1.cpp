#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double GetHarmonicMean(double x, double y);

int main()
{
    double x, y;
    double hm;

    cout << "Please enter two numbers (0 to quit): ";
    while((cin >> x >> y) && x && y)
    {
        hm = GetHarmonicMean(x,y);
        cout << "harmonic mean is " << hm << " between "
            << x << " and " << y << endl << endl;
        cout << "Please enter two numbers (0 to quit): ";
    }
    cout << "Bye!\n";

    return 0;
}

double GetHarmonicMean(double x, double y)
{
    return 2 * x * y / (x + y);
}
