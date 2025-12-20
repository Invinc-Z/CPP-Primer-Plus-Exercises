#pragma once

class Plorg
{
public:
    Plorg(const char * name = "Plorga", int ci = 50);
    ~Plorg() {}

    void setCI(int ci);
    void showInfo() const;

private:
    enum {LEN = 20};
    char name_[LEN];
    int ci_;
};

