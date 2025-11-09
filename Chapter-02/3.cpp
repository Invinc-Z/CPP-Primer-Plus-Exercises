#include <iostream>

void func1();
void func2();

int main()
{
    func1();
    func1();
    func2();
    func2();
    return 0;
}

void func1()
{
    std::cout << "Three blind mice" << std::endl;
}

void func2()
{
    std::cout << "See how they run" << std::endl;
}
