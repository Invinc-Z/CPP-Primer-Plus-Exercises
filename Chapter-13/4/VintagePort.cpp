#include "VintagePort.h"
#include <cstring>

VintagePort::VintagePort() : Port("none", "vintage", 0)
{
    nickname = nullptr;
    year = 8888;
}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y)
    : Port(br, "vintage", b)
{
    nickname = new char(strlen(nn) + 1);
    strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort & vp) : Port(vp)
{
    nickname = new char(strlen(vp.nickname) + 1);
    strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
    if(this == &vp)
        return *this;
    Port::operator=(vp);
    delete [] nickname;
    nickname = new char(strlen(vp.nickname) + 1);
    strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}

void VintagePort::Show() const
{
    Port::Show();
    std::cout << "Nickname: " << nickname << std:: endl;
    std::cout << "Year: " << year << std::endl;
}

ostream & operator<<(ostream & os, const VintagePort & vp)
{
    os << (Port)vp << ", " << vp.nickname << ", " << vp.year;
    return os;
}

