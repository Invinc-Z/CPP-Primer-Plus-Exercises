#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << "Enter your first name: ";
    char first_name[20];
    cin.getline(first_name, 20);
    cout << "Enter your last name: ";
    char last_name[20];
    cin.getline(last_name, 20);
    char full_name[40];
    strcpy(full_name, last_name);
    strcat(full_name, ", ");
    strcat(full_name, first_name);
    cout << "Here is the information in a single string: " << full_name << endl;

    return 0;
}

