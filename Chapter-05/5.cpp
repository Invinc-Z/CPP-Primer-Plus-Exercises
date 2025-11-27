#include <iostream>

using std::cout;
using std::endl;
using std::cin;

const int Num_Months = 12;

int main()
{
    const char * Months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    int total_books = 0;
    int books_solds_per_month[Num_Months] = {0};
    for (int i = 0; i < Num_Months; i++)
    {
        cout << "Enter the number of books sold in " << Months[i] << ": ";
        int books_sold;
        cin >> books_sold;
        books_solds_per_month[i] = books_sold; // 存储每月销售的书籍数量
        total_books += books_sold; // 累加每月销售的书籍数量
    }
    cout << endl;
    cout << "Total books sold in the year: " << total_books << endl;
    for (int i = 0; i < Num_Months; i++)
        cout << "Books sold in " << Months[i] << ": " << books_solds_per_month[i] << endl;
    cout << "Average books sold per month: " << static_cast<double>(total_books) / Num_Months << endl;

    return 0;
}

