#include <iostream>

const double Miles_per_100km = 62.14;
const double Liters_per_gallon = 3.875;

int main()
{
    std::cout << "Please enter the distance you drive (km): ";
    double distance_in_km;
    std::cin >> distance_in_km;

    std::cout << "Please enter the gas consumption (L): ";
    double consumption_in_liters;
    std::cin >> consumption_in_liters;

    double distance_in_miles = distance_in_km / 100 * Miles_per_100km;
    double consumption_in_gallons = consumption_in_liters / Liters_per_gallon;
    double mile_per_gallon = distance_in_miles / consumption_in_gallons;

    std::cout << "The gas consumption is " << mile_per_gallon << " miles per gallon." << std::endl;

    return 0;
}

