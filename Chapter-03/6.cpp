#include <iostream>

int main()
{
    std::cout << "Please enter the value of kilo-meter: ";
    double kilo_meter;
    std::cin >> kilo_meter;
    std::cout << "Please enter the value of gas(in L): ";
    double gas_in_liter;
    std::cin >> gas_in_liter;
    double gas_in_liter_100km = gas_in_liter / kilo_meter * 100;
    std::cout << "The gas consumption is " << gas_in_liter_100km << "L/100km." << std::endl;

    return 0;
}

