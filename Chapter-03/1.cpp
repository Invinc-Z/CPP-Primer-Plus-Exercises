#include <iostream>

const int Inches_per_foot = 12;

int main()
{
    std::cout << "Please enter your height in inches (e.g., 100): ___\b\b\b";
    int height_in_inches;
    std::cin >> height_in_inches;
    int feet = height_in_inches / Inches_per_foot;
    int inches = height_in_inches % Inches_per_foot;
    std::cout << "Your height is " << feet << " feet and " << inches << " inches." << std::endl;

    return 0;
}

