#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void PrintStr(const char * str, int i = 0);

int main()
{
    PrintStr("Hello");      // print 1 Hello
    PrintStr("World", 1);   // print 2 World
    PrintStr("C");          // print 1 C
    PrintStr("C++", -1);    // print 4 C++

    return 0;
}

void PrintStr(const char * str, int i)
{
    static int num = 0;
    ++num;
    int j = 0;
    do{
        cout << str << endl;
        if(i == 0)
            break;
    }while(++j < num);
}

