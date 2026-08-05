#pragma once

#include <string>

class Cpmv
{
public:
    struct Info
    {
        std::string qcode;
        std::string zcode;
    };
private:
    Info *pi;
public:
    Cpmv();
    Cpmv(std::string q, std::string z);
    Cpmv(const Cpmv & cp);
    Cpmv(Cpmv && mv) noexcept;
    ~Cpmv();
    Cpmv & operator=(const Cpmv & cp);
    Cpmv & operator=(Cpmv && mv) noexcept;
    Cpmv operator+(const Cpmv & obj) const;
    void Display() const;
};
// The operator+() function should create an object whose qcode and zcode mem-
// bers concatenate the corresponding members of the operands. Provide code that
// implements move semantics for the move constructor and the move assignment
// operator.Write a program that uses all the methods. For testing purposes, make the
// various methods verbose so that you can see when they are used.
