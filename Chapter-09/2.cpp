#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// function prototype
void strcount(const string & str);
int main()
{
    cout << "Enter some words (count the number of characters): " << endl;
    string input;
    getline(cin, input);
    while(cin)
    {
        if(input == "")
            break;
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
    }
    cout << "Bye\n";
    return 0;
}
void strcount(const string & str)
{
    static int total = 0; // static local variable
    int count = str.size(); // automatic local variable
    cout << "\"" << str <<"\" contains ";
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
