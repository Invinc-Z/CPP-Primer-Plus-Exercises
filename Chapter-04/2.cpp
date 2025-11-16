#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    string name;
    string dessert;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your favorite dessert: ";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert << " for you, " << name << "." << endl;

    return 0;
}

