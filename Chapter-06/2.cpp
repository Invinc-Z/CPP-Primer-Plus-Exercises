#include <iostream>
#include <array>

using std::cout;
using std::endl;
using std::cin;
using std::array;

const int ArrSize = 10;

int main()
{
    array<double, ArrSize> arr;
    int i = 0;
    int large_average_num = 0;
    double average, total;

    cout << "arr[" << i <<"] = ";
    while(i < ArrSize && cin >> arr[i])
    {
        total += arr[i];
        ++i;
        if(i != ArrSize)
            cout << "arr[" << i <<"] = ";
    }
    if(i == 0)
    {
        cout << "No data input" << endl;
        return -1;
    }
    average = total / i;
    for(int j = 0; j < i; ++j)
    {
        if(arr[j] > average)
            ++large_average_num;
    }
    cout << "The average of the numbers is " << average
        << ", and the number of larger than the average is " << large_average_num
        << endl;

    return 0;
}
