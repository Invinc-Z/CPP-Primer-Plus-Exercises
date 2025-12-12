#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void StrToUpper(string& str);

int main()
{
    cout << "Enter a string (q to quit): ";

    string str;
    while(getline(cin, str))
    {
        if(str == "q")
            break;
        StrToUpper(str);
        cout << str << endl;
        cout << "Next string (q to quit): ";
    }
    cout << "Bye.\n";

    return 0;
}

void StrToUpper(string& str)
{
    for(size_t i = 0; i < str.size(); i++)
        str[i] = toupper(str[i]);
}
