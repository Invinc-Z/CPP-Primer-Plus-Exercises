#include <iostream>

int main()
{
    std::cout << "Please input value (forlong unit): ";
    int distance;
    std::cin >> distance;
    std::cout << distance << " forlongs = " << 220 * distance << " yards" << std::endl;

    return 0;
}
