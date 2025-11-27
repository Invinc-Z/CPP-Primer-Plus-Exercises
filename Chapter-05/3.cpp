#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << "The Program calculates the sum of all integers that you enter and input 0 to exit." << endl;
    cout << "Please enter an integer: ";
    int input;
    int sum = 0;
    cin >> input;
    while (input) {
        sum += input; // 累加输入的整数
        cout << "Current sum: " << sum << endl;
        cout << "Please enter another integer (or 0 to exit): ";
        cin >> input;
    }

    return 0;
}

