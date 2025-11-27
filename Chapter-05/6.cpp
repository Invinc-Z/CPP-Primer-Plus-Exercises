#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

const int Num_Months = 12;

int main()
{
    const string Months[Num_Months] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    int total_books = 0;
    int books_solds_per_month[3][Num_Months] = {{0}};
    for (int i = 0; i < 3; i++)
    {
        int total_books_oneyear = 0;
        cout << "Sales data for year " << (i + 1) << ":" << endl;
        cout << "Enter the number of books sold in each month:" << endl;
        for (int j = 0; j < Num_Months; j++)
        {
            cout << "Enter the number of books sold in " << Months[j] << ": ";
            int books_sold;
            cin >> books_sold;
            books_solds_per_month[i][j] = books_sold; // 存储每月销售的书籍数量
            total_books_oneyear += books_sold; // 累加每月销售的书籍数量
            total_books += books_sold; // 累加每月销售的书籍数量
        }
        cout << "Total books sold in year " << (i + 1) << ": " << total_books_oneyear << endl;
    }
    cout << "Total books sold in the year: " << total_books << endl;

    return 0;
}

