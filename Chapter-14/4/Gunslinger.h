#pragma once
#include "Person.h"

class Gunslinger : virtual public Person
{
public:
    Gunslinger(const string & fn = "", const string & ln = "", double dt = 0.0, int n = 0)
        : Person(fn, ln), draw_time(dt), notches(n) {}
    Gunslinger(const Person & ps , double dt = 0.0, int n = 0)
        : Person(ps), draw_time(dt), notches(n) {}
    virtual ~Gunslinger() {} 
    double Draw() const {return draw_time;}
    void Show() const;
    void Set();
protected:
    void Data() const;
    void Get();
private:
    double draw_time;
    int notches;
};

