#include <iostream>
#include <cctype>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    char ch;
    while(cin.get(ch) && ch != '@')
    {
        if(isdigit(ch)) 
            continue;
        else if(islower(ch))
            ch = toupper(ch);
        else if(isupper(ch))
            ch = tolower(ch);
        cout << ch;
    }
    cout << endl;

    return 0;
}

