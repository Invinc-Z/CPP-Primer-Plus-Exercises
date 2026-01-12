#pragma once
#include <iostream>
#include <valarray>
#include <string>
#include "Pair.h"
using std::string;
using std::valarray;
using ArrayInt = valarray<int>;
using PairArray = Pair<ArrayInt, ArrayInt>;

class Wine : private string, private PairArray
{
public:
    Wine() : string(""), num_years(0) {}
    // initialize label to l, number of years to y,
    // vintage years to yr[], bottles to bot[]
    Wine(const char * l, int y, const int yr[], const int bot[]);
    // initialize label to l, number of years to y,
    // create array objects of length y
    Wine(const char * l, int y);
    ~Wine() {}

    void GetBottles();
    const string & Label() const {return (const string &)*this;}
    int sum() const {return ((const PairArray&)*this).second().sum();}
    void Show() const;

private:
    int num_years;
};

