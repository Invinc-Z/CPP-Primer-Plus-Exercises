#include <iostream>

int main()
{
    std::cout << "Please enter the world's population: ";
    long long world_population;
    std::cin >> world_population;
    std::cout << "Please enter the population of China: ";
    long long china_population;
    std::cin >> china_population;
    double percentage = static_cast<double>(china_population) / world_population * 100;
    std::cout << "The population of China is " << percentage << "% of the world's population." << std::endl;

    return 0;
}

