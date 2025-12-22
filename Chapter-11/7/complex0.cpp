#include "complex0.h"

Complex0::Complex0(double x /*= 0*/, double y /*= 0*/)
{
    real_ = x;
    imaginary_ = y;
}

Complex0 Complex0::operator+(const Complex0 & c) const
{
    Complex0 temp;
    temp.real_ = real_ + c.real_;
    temp.imaginary_ = imaginary_ + c.imaginary_;
    return temp;
}

Complex0 Complex0::operator-(const Complex0 & c) const
{
    Complex0 temp;
    temp.real_ = real_ - c.real_;
    temp.imaginary_ = imaginary_ - c.imaginary_;
    return temp;
}

Complex0 Complex0::operator*(const Complex0 & c) const
{
    Complex0 temp;
    temp.real_ = real_ * c.real_ - imaginary_ * c.imaginary_;
    temp.imaginary_ = real_ * c.imaginary_ + imaginary_ * c.real_;
    return temp;
}

Complex0 Complex0::operator*(double mult) const
{
    Complex0 temp;
    temp.real_ = real_ * mult;
    temp.imaginary_ = imaginary_ * mult;
    return temp;
}
Complex0 Complex0::operator~() const
{
    Complex0 temp;
    temp.real_ = real_;
    temp.imaginary_ = -imaginary_;
    return temp;
}

// Complex0 friend function
Complex0 operator*(double mult, const Complex0 & c)
{
    return c * mult;
}

ostream & operator<<(ostream & os, const Complex0 & c)
{
    os << "(" << c.real_ << "," << c.imaginary_ << "i)";
    return os;
}
istream & operator>>(istream & is, Complex0 & c)
{
    std::cout << "real: ";
    if(!(is >> c.real_))
        return is;
    std::cout << "imaginary: ";
    is >> c.imaginary_;
    return is;
}
