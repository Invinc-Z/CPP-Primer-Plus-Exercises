#ifndef EXC_MEAN_H_
#define EXC_MEAN_H_

#include <stdexcept>

class bad_hmean : public std::logic_error
{
public:
    bad_hmean()
        : std::logic_error("hmean(): arguments must not be negatives of each other") {}
};

class bad_gmean : public std::logic_error
{
public:
    bad_gmean()
        : std::logic_error("gmean(): arguments must not be negative") {}
};

#endif
