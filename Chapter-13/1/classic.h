#pragma once
#include "CD.h"

class Classic : public Cd
{
public:
    Classic(const char * s1 = "Love song", const char * s2 = "Khilal Fong", const char* s3 = "Soul", int n = 12, double x = 88.8);
    ~Classic();
    void Report() const;

private:
    char primary_work[64];
};

