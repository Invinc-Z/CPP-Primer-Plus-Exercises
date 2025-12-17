#include <iostream>
#include "4_sales.h"

using std::cin;
using std::cout;
using std::endl;

namespace SALES
{
void setSales(Sales & s, const double ar[], int n){
    int i;
    for(i = 0; i < n; i++)
        s.sales[i] = ar[i];
    while(i < QUARTERS)
        s.sales[i++] = 0;
    double max = s.sales[0];
    double min = s.sales[0];
    double sum = s.sales[0];

    for(int i = 1; i < QUARTERS; i++){
        if(max < s.sales[i])
            max = s.sales[i];
        if(min > s.sales[i])
            min = s.sales[i];
        sum += s.sales[i];
    }
    s.average = sum / QUARTERS;
    s.max = max;
    s.min = min;
}
void setSales(Sales & s){
    for(int i = 0; i < QUARTERS; i++){
        cout << "Enter sales #" << i + 1 << ": ";
        cin >> s.sales[i];
    }
    double max = s.sales[0];
    double min = s.sales[0];
    double sum = s.sales[0];

    for(int i = 1; i < QUARTERS; i++){
        if(max < s.sales[i])
            max = s.sales[i];
        if(min > s.sales[i])
            min = s.sales[i];
        sum += s.sales[i];
    }
    s.average = sum / QUARTERS;
    s.max = max;
    s.min = min;
}
void showSales(const Sales & s){
    for(int i = 0; i < QUARTERS; i++){
        cout << "Sales #" << i + 1 << ": " << s.sales[i] << endl;
    }
    cout << "average: " << s.average << endl;
    cout << "max: " << s.max << endl;
    cout << "min: " << s.min << endl;
}
}
