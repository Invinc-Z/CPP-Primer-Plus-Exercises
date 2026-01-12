#pragma once
#include <iostream>
#include <valarray>
#include <string>
#include "Pair.h"
using std::string;
using std::valarray;

class Wine
{
public:
    Wine() : name(""), num_years(0) {}
    // initialize label to l, number of years to y,
    // vintage years to yr[], bottles to bot[]
    Wine(const char * l, int y, const int yr[], const int bot[]);
    // initialize label to l, number of years to y,
    // create array objects of length y
    Wine(const char * l, int y);
    ~Wine() {}

    void GetBottles();
    const string & Label() const {return name;}
    int sum() const {return data.second().sum();}
    void Show() const;

private:
    using ArrayInt = valarray<int>;
    using PairArray = Pair<ArrayInt, ArrayInt>;
    string name;
    int num_years;
    PairArray data;
};

