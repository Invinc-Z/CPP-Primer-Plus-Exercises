#include <iostream>
#include "Sales.h"

using std::cin;
using std::cout;
using std::endl;

namespace SALES
{

Sales::Sales(const double ar[] /*= 0*/, int n /*= 0*/)
{
    int i;
    for(i = 0; i < n; i++)
        sales[i] = ar[i];
    while(i < QUARTERS)
        sales[i++] = 0;
    double max = sales[0];
    double min = sales[0];
    double sum = sales[0];

    for(int i = 1; i < QUARTERS; i++){
        if(max < sales[i])
            max = sales[i];
        if(min > sales[i])
            min = sales[i];
        sum += sales[i];
    }
    average = sum / QUARTERS;
    this->max = max;
    this->min = min;
}

void Sales::setSales()
{
    double arr[QUARTERS];
    for(int i = 0; i < QUARTERS; i++){
        cout << "Enter sales #" << i + 1 << ": ";
        cin >> arr[i];
    }
    *this = Sales(arr, QUARTERS);
}

void Sales::showSales() const
{
    for(int i = 0; i < QUARTERS; i++){
        cout << "Sales #" << i + 1 << ": " << sales[i] << endl;
    }
    cout << "average: " << average << endl;
    cout << "max: " << max << endl;
    cout << "min: " << min << endl;
}

}
