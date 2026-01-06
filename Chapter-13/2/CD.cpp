#include "CD.h"
#include <cstring>
#include <iostream>

CD::CD(const char * s1, const char * s2, int n, double x)
{
    performers = new char[strlen(s1) + 1];
    label = new char[strlen(s2) + 1];
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}
CD::CD(const CD & cd)
{
    performers = new char[strlen(cd.performers) + 1];
    label = new char[strlen(cd.label) + 1];
    strcpy(performers, cd.performers);
    strcpy(label, cd.label);
    selections = cd.selections;
    playtime = cd.playtime;
}
CD& CD::operator=(const CD & cd)
{
    if(this == &cd)
        return *this;
    delete [] label;
    delete [] performers;
    performers = new char[strlen(cd.performers) + 1];
    label = new char[strlen(cd.label) + 1];
    strcpy(performers, cd.performers);
    strcpy(label, cd.label);
    selections = cd.selections;
    playtime = cd.playtime;
    return *this;
}

CD::~CD()
{
    delete [] label;
    delete [] performers;
}

void CD::Report() const
{
    std::cout << "performers: " << performers << std::endl;
    std::cout << "label: " << label << std::endl;
    std::cout << "selections: " << selections << std::endl;
    std::cout << "playtime: " << playtime << std::endl;
}
