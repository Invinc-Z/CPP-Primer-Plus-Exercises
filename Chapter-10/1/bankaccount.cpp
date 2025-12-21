#include <iostream>
#include <string>
#include "bankaccount.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;

BankAccount::BankAccount()
{
    name = "null";
    number = "null";
    balance = 0;
}

BankAccount::BankAccount(const string & client, const string & num, double bal /*= 0.0*/)
{
    name = client;
    number = num;
    balance = bal;
}

BankAccount::~BankAccount()
{

}

void BankAccount::DisplayInfo() const
{
    cout << "name: " << name << endl;
    cout << "number: " << number << endl;
    cout << "balance: " << balance << endl;
}

void BankAccount::Deposit(double cash)
{
    balance += cash; 
}

void BankAccount::Withdraw(double cash)
{
    balance -= cash; 
}

