#include <iostream>
#include <cstring>
#include "Classic.h"

Classic::Classic(const char * s1, const char * s2, const char* s3, int n, double x) : CD(s2, s3, n, x)
{
    primary_work = new char[strlen(s1) + 1];
    strcpy(primary_work, s1);
}
Classic::Classic(const Classic & cls) : CD(cls)
{
    primary_work = new char[strlen(cls.primary_work) + 1];
    strcpy(primary_work, cls.primary_work);
}
Classic& Classic::operator=(const Classic & cls)
{
    if(this == &cls)
        return *this;
    CD::operator=(cls);
    delete [] primary_work;
    primary_work = new char[strlen(cls.primary_work) + 1];
    strcpy(primary_work, cls.primary_work);
    return *this;
}


Classic::~Classic()
{
    delete [] primary_work;
}

void Classic::Report() const
{
    CD::Report();
    std::cout << "primary work: " << primary_work << std:: endl;
}

