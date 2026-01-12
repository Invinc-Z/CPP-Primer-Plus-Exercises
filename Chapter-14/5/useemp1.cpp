// useemp1.cpp -- using the abstr_emp classes
#include <iostream>
#include "emp.h"
using namespace std;

int main(void)
{
    cout << "====================================\n\n";
    employee em("Trip", "Harris", "Thumper");
    cout << em << endl;
    em.ShowAll();
    cout << "====================================\n\n";
    manager ma("Amorphia", "Spindragon", "Nuancer", 5);
    cout << ma << endl;
    ma.ShowAll();
    cout << "====================================\n\n";
    fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
    cout << fi << endl;
    fi.ShowAll();
    cout << "====================================\n\n";
    cout << ma << endl;
    highfink hf(ma, "Curly Kew"); // recruitment?
    hf.ShowAll();
    cout << "====================================\n\n";
    cout << "Press a key for next phase:\n";
    cin.get();
    highfink hf2;
    hf2.SetAll();
    cout << "\n\nUsing an abstr_emp * pointer:\n\n";
    cout << "====================================\n\n";
    abstr_emp * tri[4] = {&em, &fi, &hf, &hf2};
    for (int i = 0; i < 4; i++)
    {
        tri[i]->ShowAll();
        cout << "====================================\n\n";
    }
    return 0;
}
