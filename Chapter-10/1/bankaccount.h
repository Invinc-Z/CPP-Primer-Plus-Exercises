#pragma once
#include <string>

using std::string;

class BankAccount
{
public:
    BankAccount();
    BankAccount(const string & client, const string & num, double bal = 0.0);
    ~BankAccount();

    void DisplayInfo() const;
    void Deposit(double cash);
    void Withdraw(double cash);

private:
    string name;
    string number;
    double balance;
};
