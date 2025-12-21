#include <iostream>
#include "sales.h"

int main()
{
    using namespace SALES;
    double sales[3] = {111.1, 222.2, 333.3};
    Sales s(sales, 3);
    s.showSales();

    s.setSales();
    s.showSales();

    return 0;
}
