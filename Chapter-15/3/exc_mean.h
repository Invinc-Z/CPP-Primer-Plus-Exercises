#ifndef EXC_MEAN_H_
#define EXC_MEAN_H_

// This exercise is the same as Programming Exercise 2, except that the exceptions
// should be derived from a base class (itself derived from logic_error) that stores the
// two argument values, the exceptions should have a method that reports these values
// as well as the function name, and a single catch block that catches the base-class
// exemption should be used for both exceptions, with either exception causing the
// loop to terminate.

#include <stdexcept>
#include <iostream>

class bad_mean : public std::logic_error
{
private:
    double v1;
    double v2;

public:
    bad_mean(double a, double b, const char * message)
        : std::logic_error(message), v1(a), v2(b) {}

    virtual void report() const
    {
        std::cout << what() << '\n'
                  << "Arguments: " << v1 << ", " << v2 << '\n';
    }
};

class bad_hmean : public bad_mean
{
public:
    bad_hmean(double a, double b)
        : bad_mean(a, b,
                   "hmean(): arguments must not be negatives of each other") {}
};

class bad_gmean : public bad_mean
{
public:
    bad_gmean(double a, double b)
        : bad_mean(a, b, "gmean(): arguments must not be negative") {}
};

#endif
