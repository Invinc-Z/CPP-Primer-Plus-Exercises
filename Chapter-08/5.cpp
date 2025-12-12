#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int ArrSize = 5;
template <typename T>
T max5(T arr[ArrSize]);

template <typename T>
void PrintArr(T arr[], int n);

int main()
{
    int arr1[ArrSize] = {1, 2, 3, 4, 5};
    double arr2[ArrSize] = {1.1, 2.2, 3.3, 4.4, 5.5};

    cout << "The integer array as follows: " << endl;
    PrintArr(arr1, ArrSize);
    cout << "the largest int value is " << max5(arr1) << endl;
    cout << "The double array as follows: " << endl;
    PrintArr(arr2, ArrSize);
    cout << "the largest double value is " << max5(arr2) << endl;


    return 0;
}

    template <typename T>
T max5(T arr[ArrSize])
{
    T max = arr[0];
    for(int i = 1; i < ArrSize; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}
    template <typename T>
void PrintArr(T arr[], int n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << endl;
}
