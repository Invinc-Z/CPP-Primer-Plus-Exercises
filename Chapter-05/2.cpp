#include <iostream>
#include <array>

using std::cout;
using std::endl;
using std::cin;
using std::array;

int main()
{
    const int ArraySize = 101;
    array<long double, ArraySize> arr{};
    arr[0] = 1.0; // 0! = 1
    for (int i = 1; i < ArraySize; ++i) {
        arr[i] = arr[i - 1] * i; // 计算阶乘
    }
    cout << ArraySize -1 << "! = " << arr[ArraySize-1] << endl;

    return 0;
}

