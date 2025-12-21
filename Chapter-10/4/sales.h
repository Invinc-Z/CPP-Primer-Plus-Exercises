#pragma once

namespace SALES
{
class Sales
{
public:
    Sales(const double ar[] = 0, int n = 0);
    ~Sales() {}

    void setSales();
    // display all information in structure s
    void showSales() const;
private:
    enum {QUARTERS = 4};
    double sales[QUARTERS];
    double average;
    double max;
    double min;
};
}
