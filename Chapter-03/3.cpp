#include <iostream>

const int Seconds_per_minute = 60;
const int Minutes_per_degree = 60;

int main()
{
    int degrees, minutes, seconds;
    std::cout << "Please enter a latitude in degrees, minutes, and seconds: " << std::endl;;
    std::cout << "First, enter the degrees: ";
    std::cin >> degrees;
    std::cout << "Next, enter the minutes of arc: ";
    std::cin >> minutes;
    std::cout << "Finally, enter the seconds of arc: ";
    std::cin >> seconds;
    double latitude = degrees + (double)minutes / Minutes_per_degree + (double)seconds / (Minutes_per_degree * Seconds_per_minute);
    std::cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = "
        << latitude << " degrees" << std::endl;

    return 0;
}

