#include <iostream>
#include <cstring>
#include "plorg.h"


Plorg::Plorg(const char * name /*= "Plorga"*/, int ci /*= 50*/)
{
    strncpy(name_, name, LEN - 1);
    name_[LEN - 1] = '\0';
    ci_ = ci;
}

void Plorg::setCI(int ci)
{
    ci_ = ci;
}


void Plorg::showInfo() const
{
    std::cout << "Name: " << name_ << ", CI: " << ci_ << std::endl; 
}

