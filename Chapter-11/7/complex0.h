#pragma once

#include <iostream>
using std::istream;
using std::ostream;
class Complex0
{
public:
    Complex0(double x = 0, double y = 0);
    ~Complex0() {}

    Complex0 operator+(const Complex0 & c) const;
    Complex0 operator-(const Complex0 & c) const;
    Complex0 operator*(const Complex0 & c) const;
    Complex0 operator*(double mult) const;
    Complex0 operator~() const;

    friend Complex0 operator*(double mult, const Complex0 & c);
    friend ostream & operator<<(ostream & os, const Complex0 & c);
    friend istream & operator>>(istream & is, Complex0 & c);

private:
    double real_;
    double imaginary_;
};

