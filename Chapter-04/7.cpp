#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int BUF_SIZE = 32;
struct Pizza {
    char name[BUF_SIZE];
    double diameter;
    double weight;
};
int main()
{
    Pizza pizza;
    cout << "Enter the name of the pizza: ";
    cin.getline(pizza.name, BUF_SIZE);
    cout << "Enter the diameter of the pizza (in inches): ";
    cin >> pizza.diameter;
    cout << "Enter the weight of the pizza (in grams): ";
    cin >> pizza.weight;
    cout << "Pizza Name: " << pizza.name << endl;
    cout << "Diameter: " << pizza.diameter << " inches" << endl;
    cout << "Weight: " << pizza.weight << " grams" << endl;

    return 0;
}

