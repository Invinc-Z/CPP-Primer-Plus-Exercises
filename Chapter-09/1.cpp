#include <iostream>
#include "1_golf.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    const int ARR_SIZE = 5;
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);
    handicap(ann, 42);
    showgolf(ann);

    golf arr_golf[ARR_SIZE];
    int j = 0;
    for(int i = 0; i < ARR_SIZE; i++){
        if(!setgolf(arr_golf[i]))
            break;
        ++j;
    }
    cout << endl;
    for(int i = 0; i < j; i++){
        showgolf(arr_golf[i]);
    }

    return 0;
}

