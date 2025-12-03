#include <iostream>

using std::cout;
using std::endl;
using std::cin;

const double TaxRatio1 = 0.0;
const double TaxRatio2 = 0.1;
const double TaxRatio3 = 0.15;
const double TaxRatio4 = 0.2;

const int TaxLine1 = 5000;
const int TaxLine2 = 10000;
const int TaxLine3 = 20000;
const int TaxLine4 = 35000;

int main()
{
    cout << "Please enter your incomes (negative number or non-numeric to quit): ";
    double incomes = 0;
    double tax = 0;
    while(cin >> incomes && incomes > 0)
    {
        if(incomes <= TaxLine1)
            tax = incomes;
        else if(incomes > TaxLine1 && incomes <= TaxLine2)
            tax = TaxLine1 * TaxRatio1 + (incomes - TaxLine1) * TaxRatio2;
        else if(incomes > TaxLine2 && incomes <= TaxLine3)
            tax = TaxLine1 * TaxRatio1 + TaxLine2 * TaxRatio2 + (incomes - TaxLine2) * TaxRatio3;
        else if(incomes > TaxLine3 && incomes <= TaxLine4)
            tax = TaxLine1 * TaxRatio1 + TaxLine2 * TaxRatio2 + TaxLine3 * TaxRatio3 + (incomes - TaxLine3) * TaxRatio4;
        else if(incomes > TaxLine4)
            tax = TaxLine1 * TaxRatio1 + TaxLine2 * TaxRatio2 + TaxLine3 * TaxRatio3 + (incomes - TaxLine4) * TaxRatio4;

        cout << "You should pay tax money: " << tax << endl;
        cout << "Please enter your incomes (negative number or non-numeric to quit): ";
    }
    cout << "Bye!" << endl;
    return 0;
}
