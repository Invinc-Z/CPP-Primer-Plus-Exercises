#include "Port.h"
#include <cstring>

Port::Port(const char * br /*= "none"*/, const char * st /*= "none"*/, int b /*= 0*/)
{
    brand = new char[strlen(br) + 1];
    strcpy(brand, br);
    strcpy(style, st);
    bottles = b;
}

Port::Port(const Port & p) // copy constructor
{
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
}

Port & Port::operator=(const Port & p)
{
    if(this == &p)
        return *this;
    delete [] brand;
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
    return *this;
}

Port & Port::operator+=(int b) // adds b to bottles
{
    bottles += b;
    return *this;
}

Port & Port::operator-=(int b) // sub b to bottles, if available
{
    if(b >= bottles)
        std::cout << "bottles available is: " << bottles << endl;
    else
        bottles -= b;
    return *this;
}
void Port::Show() const
{
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Kind: " << style << std::endl;
    std::cout << "Bottles: " << bottles << std::endl;
}

ostream & operator<<(ostream & os, const Port & p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}

