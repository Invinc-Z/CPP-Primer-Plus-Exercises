#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

struct car {
    string make;
    int year;
};

int main()
{
    int num_cars;
    cout << "How many cars do you wish to catalog: ";
    cin >> num_cars;
    cin.ignore(); // 清除输入缓冲区中的换行符
    car* cars = new car[num_cars]; // 动态分配内存
    for (int i = 0; i < num_cars; ++i) {
        cout << "Car #" << (i + 1) << ":\n";
        cout << "Please enter the make: ";
        getline(cin, cars[i].make);
        cout << "Please enter the year made: ";
        cin >> cars[i].year;
        cin.ignore(); // 清除输入缓冲区中的换行符
    }
    cout << "Here is your collection:\n";
    for (int i = 0; i < num_cars; ++i) {
        cout << "Car #" << (i + 1) << ": " << cars[i].make << ", Year: " << cars[i].year << endl;
    }

    return 0;
}

