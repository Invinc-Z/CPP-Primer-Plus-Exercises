#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << "The program calculates and outputs the sum of all integers between (including) two integers." << endl;
    cout << "Enter the minimum value: ";
    int min_value;
    cin >> min_value;
    cout << "Enter the maximum value: ";
    int max_value;
    cin >> max_value;
    if (min_value >= max_value) {
        cout << "Invalid range. Minimum should be less than maximum." << endl;
        return -1;
    }
    int sum = 0;
    for (int i = min_value; i <= max_value; ++i) {
        sum += i;
    }
    cout << "The sum of values from " << min_value << " to " << max_value << " is: " << sum << endl;

    return 0;
}

