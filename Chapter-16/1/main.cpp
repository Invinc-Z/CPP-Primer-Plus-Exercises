#include <iostream>
#include <string>
#include <algorithm>

using std::string;
using std::cout;
using std::cin;
using std::endl;


bool isPalindrome(const string & s);

int main (int argc, char *argv[]) {

    string temp;
    cout << "Please enter your string(enter quit to quit): ";
    while (cin >> temp && temp != "quit") {
        if (isPalindrome(temp)) {
            cout << temp << " is palindrome" << endl;
        } else
            cout << temp << " is not palindrome" << endl;
        cout << "Please enter your string(enter quit to quit):";
    }

    return 0;
}

bool isPalindrome(const string & s)
{
    return equal(s.begin(), s.begin() + s.size()/2, s.rbegin());
}

