#include <iostream>

double C2F(double degree);

int main()
{
    std::cout << "Please enter a Celsius value: ";
    int degree;
    std::cin >> degree;
    std::cout << degree << " degrees Celsius is " << C2F(degree) << " degrees Fahrenheit." << std::endl;

    return 0;
}

double C2F(double degree)
{
    return degree * 1.8 + 32.0;
}
