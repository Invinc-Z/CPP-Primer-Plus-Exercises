// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
using std::endl;
#include "stonewt.h"
void display(const Stonewt & st, int n);
int main(){
    Stonewt init;   // Stonewt()
    Stonewt incognito = 275; // Stonewt(double) implicit conversion
    Stonewt wolfe(285.7); // same as Stonewt wolfe = 285.7;
    Stonewt taft(21, 8);    // Stonewt(int, double)

    cout << "The incognito weighed ";
    cout << incognito << endl;      // friend operator<<
    incognito.stnMode();           // Stonewt::stnMode()
    cout << "Also can be represented: ";
    cout << incognito << endl;

    cout << "The wolfe weighed ";
    cout << wolfe << endl;
    cout << "The taft weighed ";
    cout << taft << endl;
    taft.lbsMode();                 // Stonewt::lbsMode()
    cout << "Also can be represented: ";
    cout << taft << endl;

    incognito = 276.8; // uses constructor for conversion
    taft = 325; // same as taft = Stonewt(325);
    cout << "After dinner, the incognito weighed ";
    cout << incognito << endl;
    cout << "After dinner, the taft weighed ";
    cout << taft << endl;

    cout << "incognito + taft weighed: ";
    cout << incognito + taft << endl;
    cout << "incognito - taft weighed: ";
    cout << incognito - taft << endl;
    cout << "incognito * 2 weighed: ";
    cout << incognito * 2 << endl;
    cout << "2 * incognito weighed: ";
    cout << 2 * incognito << endl;
    return 0;
}
