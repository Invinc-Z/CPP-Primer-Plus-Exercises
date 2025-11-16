#include <iostream>
#include <array>

using std::cout;
using std::endl;
using std::cin;
using std::array;

int main()
{
    array<double, 3> arr;
    cout << "Enter three numbers: " << endl;
    cin >> arr[0] >> arr[1] >> arr[2];
    cout << "The count is: 3" << endl;
    cout << "The average is: " << (arr[0] + arr[1] + arr[2]) / 3 << endl;

    return 0;
}

