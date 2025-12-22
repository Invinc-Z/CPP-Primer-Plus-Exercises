// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"
void Stonewt::set_stone()
{
    stone = (int)pounds / Lbs_per_stn;
}
void Stonewt::set_pds_left()
{
    pds_left = (int)pounds % Lbs_per_stn + pounds - (int)pounds; 
}
void Stonewt::set_pounds()
{
    pounds = stone * Lbs_per_stn + pds_left;
}

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
    pounds = lbs;
    set_stone();
    set_pds_left();
    mode = LBS;
}
// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    set_pounds();
    mode = STN;
}
Stonewt::Stonewt() // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
    mode = LBS;
}
Stonewt::~Stonewt()
{
}
void Stonewt::stnMode()
{
    mode = STN;
}
void Stonewt::lbsMode()
{
    mode = LBS;
}

// friend function
ostream & operator<<(ostream & os, const Stonewt & s)
{
    if(s.mode == Stonewt::STN){
        os  << s.stone << " stone, " << s.pds_left << " pounds\n";
    }
    else if(s.mode == Stonewt::LBS){
        os << s.pounds << " pounds\n";
    }
    else
        os << "Stonewt object mode is invalid.\n";
    return os;
}
istream & operator>>(istream & is, Stonewt & s)
{
    is >> s.pounds;
    s.set_stone();
    s.set_pds_left();
    s.mode = s.LBS;
    return is;
}

Stonewt operator+(const Stonewt & s1, const Stonewt & s2)
{
    double pounds = s1.pounds + s2.pounds;
    return Stonewt(pounds);
}
Stonewt operator-(const Stonewt & s1, const Stonewt & s2)
{
    double pounds = s1.pounds - s2.pounds;
    return Stonewt(pounds);
}
Stonewt operator*(const Stonewt & s, double mult)
{
    double pounds = s.pounds * mult;
    return Stonewt(pounds);
}
Stonewt operator*(double mult, const Stonewt & s)
{
    double pounds = s.pounds * mult;
    return Stonewt(pounds);
}
