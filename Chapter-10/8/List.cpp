#include <iostream>
#include "List.h"

using std::cout;
using std::endl;

bool List::addItem(const Item& item)
{
    if(isFull()){
        cout << "List is full." << endl;
        return 0;
    }
    items[index++]= item;
    return 1;
}

bool List::isEmpty() const
{
    return index == 0;
}

bool List::isFull() const
{
    return index == LEN;
}

void List::visit(void (*pf)(Item & item))
{
    if(index == 0){
        cout << "List is empty." << endl;
        return;
    }
    for(int i = 0; i < index; i++)
        pf(items[i]);
}

void showItem(Item & item)
{
    cout << item << endl;
}

void onePlus(Item & item)
{
    item += 1;
}
