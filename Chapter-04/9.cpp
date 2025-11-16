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

    CandyBar* snacks = new CandyBar[3];

    snacks[0] = { "Mocha Munch", 2.3, 350 };
    snacks[1] = { "Choco Delight", 1.5, 200 };
    snacks[2] = { "Nutty Crunch", 2.0, 300 };

    cout << "Brand: " << snacks[0].brand << endl;
    cout << "Weight: " << snacks[0].weight << endl;
    cout << "Calories: " << snacks[0].calories << endl;
    cout << endl;
    cout << "Brand: " << snacks[1].brand << endl;
    cout << "Weight: " << snacks[1].weight << endl;
    cout << "Calories: " << snacks[1].calories << endl;
    cout << endl;
    cout << "Brand: " << snacks[2].brand << endl;
    cout << "Weight: " << snacks[2].weight << endl;
    cout << "Calories: " << snacks[2].calories << endl;

    delete[] snacks; // 释放动态分配的内存
    return 0;
}

