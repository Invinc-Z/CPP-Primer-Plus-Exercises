#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::cin;
using std::endl;


bool isPalindrome(const string & text);
string doNorm(const string & text);


int main (int argc, char *argv[]) {

    string temp;
    cout << "Please enter your string(enter quit to quit): ";
    while (getline(cin, temp) && temp != "quit") {
        if (isPalindrome(temp)) {
            cout << temp << " is palindrome" << endl;
        } else
            cout << temp << " is not palindrome" << endl;
        cout << "Please enter your string(enter quit to quit):";
    }

    return 0;
}

bool isPalindrome(const string & text)
{
    string s = doNorm(text);
    return equal(s.begin(), s.begin() + s.size()/2, s.rbegin());
}

string doNorm(const string & text)
{
    string temp;

    for (auto ch : text) {
        if (std::isalnum(ch)) {
            temp.push_back(std::tolower(ch));
        }
    }

    return temp;
}

