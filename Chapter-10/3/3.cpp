#include <iostream>
#include "Golf.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    const int ARR_SIZE = 5;

    Golf ann("Ann Birdfree", 24);
    ann.showGolf();
    ann.setHandicap(42);
    ann.showGolf();

    Golf arr_golf[ARR_SIZE];
    int j = 0;
    for(int i = 0; i < ARR_SIZE; i++){
        if(!(arr_golf[i].setGolf()))
            break;
        ++j;
    }
    cout << endl;
    for(int i = 0; i < j; i++){
        arr_golf[i].showGolf();
    }

    return 0;
}

