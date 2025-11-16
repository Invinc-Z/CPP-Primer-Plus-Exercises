#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

struct CandyBar {
    string brand;
    double weight;
    int calories;
};
int main()
{
    CandyBar snack = { "Mocha Munch", 2.3, 350 };
    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calories: " << snack.calories << endl;

    return 0;
}

