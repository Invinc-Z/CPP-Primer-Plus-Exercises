#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int Factorial(int n);

int main()
{
    int n;
    cout << "Enter the value you want to calculate its factorial (<0 to quit): ";
    while(cin >> n && n >= 0)
    {
        cout << n << "! = " << Factorial(n) << endl;
        cout << "Enter the value you want to calculate its factorial (<0 to quit): ";
    }
    cout << "Bye!\n";

    return 0;
}

int Factorial(int n)
{
    if(n == 0)
        return 1;
    return n * Factorial(n-1);
}

