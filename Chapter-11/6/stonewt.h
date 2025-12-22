// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
using std::ostream;
using std::istream;
class Stonewt
{
public:
    enum Mode {STN, LBS};
    enum {Lbs_per_stn = 14}; // pounds per stone
private:
    int stone; // whole stones
    double pds_left; // fractional pounds
    double pounds; // entire weight in pounds
    Mode mode;

    void set_stone();
    void set_pds_left();
    void set_pounds();

public:
    Stonewt(double lbs); // constructor for double pounds
    Stonewt(int stn, double lbs); // constructor for stone, lbs
    Stonewt(); // default constructor
    ~Stonewt();

    void stnMode();    // set mode to stone and fractional pounds
    void lbsMode();    // set mode to pounds

    bool operator==(const Stonewt & s) const {return pounds == s.pounds;}
    bool operator!=(const Stonewt & s) const {return pounds != s.pounds;}
    bool operator>(const Stonewt & s) const {return pounds > s.pounds;}
    bool operator>=(const Stonewt & s) const {return pounds >= s.pounds;}
    bool operator<(const Stonewt & s) const {return pounds < s.pounds;}
    bool operator<=(const Stonewt & s) const {return pounds <= s.pounds;}

    friend ostream & operator<<(ostream & os, const Stonewt & s);
    friend istream & operator>>(istream & os, Stonewt & s);
    friend Stonewt operator+(const Stonewt & s1, const Stonewt & s2);
    friend Stonewt operator-(const Stonewt & s1, const Stonewt & s2);
    friend Stonewt operator*(const Stonewt & s, double mult);
    friend Stonewt operator*(double mult, const Stonewt & s);
};
#endif
