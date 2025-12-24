#include <iostream>
#include "stack.h"
using std::cout;
using std::endl;

int main()
{
    Stack st1;
    Stack st2(5);

    int i = 0;
    while(!st2.isfull())
    {
        st2.push(i);
        i++;
    }

    Stack st3(st2);
    Item item;
    while(!st3.isempty())
    {
        st3.pop(item);
        cout << item << endl;
    }

    st1 = st2;
    while(!st1.isempty())
    {
        st1.pop(item);
        cout << item << endl;
    }

    return 0;
}

