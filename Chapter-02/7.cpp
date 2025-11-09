#include <iostream>

void timef(int hours, int minutes);

int main()
{
    int hours, minutes;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the number of minutes: ";
    std::cin >> minutes;

    timef(hours, minutes);
    return 0;
}

void timef(int hours, int minutes)
{
    std::cout << "Time: " << hours << ":" << minutes << std::endl;
}
