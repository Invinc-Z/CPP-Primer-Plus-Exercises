#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    string word;
    char ch;
    int vowels = 0;
    int consonants = 0; 
    int others = 0;

    cout << "Enter words (q to quit): " << endl;
    while(cin >> word)
    {
        if(word == "q")
            break;

        if(isalpha(word[0]))
        {
            ch = tolower(word[0]);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                ++vowels;
            else
                ++consonants;
        }
        else
            ++others;
    }

    cout << vowels << " words beginning with vowels" << endl;
    cout << consonants << " words beginning with consonants" << endl;
    cout << others << " others" << endl;

    return 0;
}
