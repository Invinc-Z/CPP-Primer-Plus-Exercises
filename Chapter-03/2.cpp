#include <iostream>

const int Inches_per_foot = 12;
const double Meters_per_inch = 0.0254;
const double Pounds_per_kg = 2.20462;

int main()
{
    std::cout << "Please enter your height in foot and inches (e.g., 4 10): ";
    double height_in_foot, height_in_inches;
    double weight_in_pounds;
    std::cin >> height_in_foot;
    std::cin >> height_in_inches;
    std::cout << "Please enter your weight in pounds: ";
    std::cin >> weight_in_pounds;
    double height_in_meters = (height_in_foot * Inches_per_foot + height_in_inches) * Meters_per_inch;
    double weight_in_kg = weight_in_pounds / Pounds_per_kg;
    double bmi = weight_in_kg / (height_in_meters * height_in_meters);
    std::cout << "Your height in meters is: " << height_in_meters << std::endl;
    std::cout << "Your weight in kg is: " << weight_in_kg << std::endl;
    std::cout << "Your BMI is: " << bmi << std::endl;

    return 0;
}

