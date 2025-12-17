#include <iostream>
#include "4_sales.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    using namespace SALES;
    Sales s;
    double sales[3] = {111.1, 222.2, 333.3};
    setSales(s, sales, 3);
    showSales(s);

    setSales(s);
    showSales(s);

    return 0;
}
