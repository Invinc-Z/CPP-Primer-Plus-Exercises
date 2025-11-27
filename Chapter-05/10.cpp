#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << "Enter the number of rows: ";
    int rows;
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        int j = 0;
        for ( ; j < rows - i - 1; j++ )
            cout << "."; 
        for ( ; j < rows; j++ )
            cout << "*"; 
        cout << endl;
    }

    return 0;
}

