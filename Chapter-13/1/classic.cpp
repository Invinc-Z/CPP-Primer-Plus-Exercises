#include <iostream>
#include <cstring>
#include "classic.h"

Classic::Classic(const char * s1, const char * s2, const char* s3, int n, double x) : Cd(s2, s3, n, x)
{
    memset(primary_work, 0, sizeof(primary_work));
    strcpy(primary_work, s1);
}

Classic::~Classic()
{

}

void Classic::Report() const
{
    Cd::Report();
    std::cout << "primary work: " << primary_work << std:: endl;
}

