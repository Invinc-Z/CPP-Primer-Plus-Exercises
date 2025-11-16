#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

struct Pizza {
    string name;
    double diameter;
    double weight;
};
int main()
{
    Pizza* pizza = new Pizza;
    cout << "Enter the diameter of the pizza (in inches): ";
    cin >> pizza->diameter;
    cin.get(); // 读输入缓冲区中的换行符
    cout << "Enter the name of the pizza: ";
    getline(cin, pizza->name);
    cout << "Enter the weight of the pizza (in grams): ";
    cin >> pizza->weight;
    cout << "Pizza Name: " << pizza->name << endl;
    cout << "Diameter: " << pizza->diameter << " inches" << endl;
    cout << "Weight: " << pizza->weight << " grams" << endl;
    delete pizza; // 释放动态分配的内存

    return 0;
}

