#include <iostream>

const int Seconds_per_minute = 60;
const int Minutes_per_hour = 60;
const int Seconds_per_hour = Seconds_per_minute * Minutes_per_hour;
const int Hours_per_day = 24;
const int Seconds_per_day = Seconds_per_hour * Hours_per_day;

int main()
{
    std::cout << "Please enter the number of seconds: ";
    long seconds_input;
    std::cin >> seconds_input;
    int days = seconds_input / Seconds_per_day;
    int hours = (seconds_input % Seconds_per_day) / Seconds_per_hour;
    int minutes = (seconds_input % Seconds_per_hour) / Seconds_per_minute;
    int seconds = seconds_input % Seconds_per_minute;
    std::cout << seconds_input << " seconds = "
        << days << " days, "
        << hours << " hours, "
        << minutes << " minutes, "
        << seconds << " seconds." << std::endl;

    return 0;
}

