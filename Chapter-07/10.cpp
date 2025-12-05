#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double calculate(double x, double y, double (*func)(double, double));
const int NUM_OP = 3;
int main()
{
    int x, y;
    double (*pf[NUM_OP])(double, double) = {add, subtract, multiply};
    const char* op_symbol[NUM_OP] = {" + ", " - ", " * "};
    cout << "Enter two numbers (non-numeric to quit): ";
    while(cin >> x >> y)
    {
        for(int i = 0; i < NUM_OP; i++){
            cout << x << op_symbol[i] << y << " = " << calculate(x, y, pf[i]) << endl;
        }
        cout << "Enter two numbers (non-numeric to quit): ";
    }
    cout << "Bye!\n";

    return 0;
}

double add(double x, double y)
{
    return x + y;
}
double subtract(double x, double y)
{
    return x - y;
}
double multiply(double x, double y)
{
    return x * y;
}

double calculate(double x, double y, double (*func)(double, double))
{
    return func(x,y);
}
