// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
#include <climits>
using std::cin;
using std::cout;
using std::endl;
#include "stonewt.h"
void display(const Stonewt & st, int n);
int main(){
    Stonewt base(11,0);   // 11 stone
    Stonewt arr[6] = {Stonewt(11,0), 14, 11 * 14};
    Stonewt max = 0;
    Stonewt min = UINT_MAX;
    int count = 0;

    for(int i = 3; i < 6; i++)
    {
        cout << "Enter arr[" << i << "] (by pounds): ";
        cin >> arr[i];
    }
    for(int i = 0; i < 6; i++){
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] >= base)
            count++;
    }
    cout << "The smallest element: " << min << endl;
    cout << "The largest element: " << max << endl;
    cout << "The number of greater_equal to 11 stone: " << count << endl;
    return 0;
}
