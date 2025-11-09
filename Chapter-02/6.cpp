#include <iostream>

double light_years2astronomical_units(double light_years);

int main()
{
    std::cout << "Please enter the number of light years: ";
    double light_years;
    std::cin >> light_years;
    std::cout << light_years 
        << " light years = " 
        << light_years2astronomical_units(light_years) 
        << " astronomical units." 
        << std::endl;

    return 0;
}

double light_years2astronomical_units(double light_years)
{
    return light_years * 63240;
}
