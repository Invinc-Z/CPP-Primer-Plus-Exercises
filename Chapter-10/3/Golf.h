#pragma once

class Golf
{
public:
    Golf(const char * name = "null", int hc = 0);
    ~Golf() {}

    bool setGolf(); 
    void setHandicap(int hc);
    void showGolf() const;

private:
    static const int Len = 40;
    char fullname[Len];
    int handicap;
};

