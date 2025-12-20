#include <iostream>
#include <string>
#include "stack.h"

using std::cin;
using std::cout;
using std::endl;

void addCustomer(Stack & s, Customer & c);
void delCustomer(Stack & s, Customer & c);
static double total = 0;

int main()
{
    Stack s;
    Customer c;

    char choice;
    cout << "Enter your choice (a to add, d to remove, q to quit): ";
    while(cin >> choice && choice != 'q')
    {
        while(cin.get() != '\n')
            continue;
        switch(choice){
        case 'a':
        case 'A':
            addCustomer(s, c);
            break;
        case 'd':
        case 'D':
            delCustomer(s, c);
            break;
        default:
            cout << "Invalid input." << endl;
        }
        cout << "Enter your choice (a to add, d to remove, q to quit): ";
    }

    cout <<"Bye.\n";
    return 0;
}

void addCustomer(Stack & s, Customer & c)
{
    if(s.isfull()){
        cout << "Total money is: " << total << endl;
        cout << "Stack is full. Please pop stack first." << endl;
        return;
    }
    cout << "Enter customer name: ";
    cin.getline(c.fullname, sizeof(c.fullname));
    cout << "Enter the payment: ";
    cin >> c.payment;

    while(cin.get() != '\n')
        continue;

    s.push(c);
    total += c.payment;
    cout << "Total money is: " << total << endl;
}

void delCustomer(Stack & s, Customer & c)
{
    if(s.isempty()){
        cout << "Total money is: " << total << endl;
        cout << "Stack is empty. Please push customer first." << endl;
        return;
    }
    s.pop(c);
    total -= c.payment;
    cout << "Total money is: " << total << endl;
}
