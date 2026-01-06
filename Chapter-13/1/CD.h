#pragma once

// base class
class Cd { // represents a CD disk
private:
    char performers[50];
    char label[20];
    int selections; // number of selections
    double playtime; // playing time in minutes
public:
    Cd(const char * s1 = "Khilal Fong", const char * s2 = "Soul", int n = 12, double x = 88.8);
    virtual ~Cd();
    virtual void Report() const; // reports all CD data
};
