#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::cin;
using std::ifstream;

int main()
{
    ifstream ifs;
    ifs.open("1.cpp");
    if(!ifs.is_open())
    {
        cout << "failed to open file" << endl;
        return -1;
    }
    char ch;
    int count = 0;
    while(ifs.get(ch))
        ++count;
    ifs.close();
    cout << count << " characters in the file" << endl;

    return 0;
}
