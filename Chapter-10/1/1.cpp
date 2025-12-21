#include <iostream>
#include <string>
#include "bankaccount.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    BankAccount ba;
    ba.DisplayInfo();

    BankAccount ba2("Invinc-Z", "888", 9999.99);
    ba2.DisplayInfo();

    ba2.Withdraw(0.99);
    ba2.DisplayInfo();

    ba2.Deposit(1);
    ba2.DisplayInfo();

    return 0;
}

