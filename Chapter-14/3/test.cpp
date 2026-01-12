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
    QueueTp<Worker*> qw;
    Worker * lolas[SIZE];
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
            lolas[ct] = new Waiter;
            break;
        case 's': 
            lolas[ct] = new Singer;
            break;
        case 't': 
            lolas[ct] = new SingingWaiter;
            break;
        }
        cin.get();
        lolas[ct]->Set();
        qw.enqueue(lolas[ct]);
    }
    cout << "\nHere is your staff:\n";
    int i;
    Worker* pWorker;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        qw.dequeue(pWorker);
        pWorker->Show();
    }
    for (i = 0; i < ct; i++)
        delete lolas[i];
    cout << "Bye.\n";
    return 0;
}
