// compile with workermi.cpp
#include <iostream>
#include <cstring>
#include "workermi.h"
#include "QueueTp.h"
using std::cin;
using std::cout;
using std::endl;
using std::strchr;
const int SIZE = 5;

int main()
{
    QueueTp<Worker*> qw(SIZE);
    Worker * lolas;
    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category:\n"
            << "w: waiter s: singer "
            << "t: singing waiter q: quit\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL)
        {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch(choice)
        {
        case 'w': 
            lolas = new Waiter;
            break;
        case 's': 
            lolas = new Singer;
            break;
        case 't': 
            lolas = new SingingWaiter;
            break;
        }
        cin.get();
        lolas->Set();
        qw.enqueue(lolas);
    }
    cout << "\nHere is your staff:\n";
    int i;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        qw.dequeue(lolas);
        lolas->Show();
        delete lolas;
    }
    cout << "Bye.\n";
    return 0;
}
