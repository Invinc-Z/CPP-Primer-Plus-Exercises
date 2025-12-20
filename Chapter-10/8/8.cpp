#include <iostream>
#include "List.h"

using std::cout;
using std::endl;

int main()
{
    List list;
    list.visit(showItem);

    cout << "Add 6 items: " << endl;
    for(int i = 0; i < 6; i++){
        cout << "Add item# " << i + 1 << endl;
        list.addItem(i);
    }

    cout << endl;
    cout << "Print items: " << endl;
    list.visit(showItem);

    cout << endl;
    cout << "Add 1 and print items: " << endl;
    list.visit(onePlus);
    list.visit(showItem);

    return 0;
}

