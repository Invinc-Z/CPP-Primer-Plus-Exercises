#pragma once

// base class
class CD { // represents a CD disk
private:
    char * performers;
    char * label;
    int selections; // number of selections
    double playtime; // playing time in minutes
public:
    CD(const char * s1 = "Khilal Fong", const char * s2 = "Soul", int n = 12, double x = 88.8);
    CD(const CD &);
    CD& operator=(const CD &);
    virtual ~CD();
    virtual void Report() const; // reports all CD data
};
