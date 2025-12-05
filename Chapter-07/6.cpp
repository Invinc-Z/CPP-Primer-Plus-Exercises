#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int kArrSize = 7;
int FillArray(double [], int);
void ShowArray(double [], int);
void ReverseArray(double [], int);

int main()
{
    double arr[kArrSize] = {0};

    int num = FillArray(arr, kArrSize);
    cout << "The array as follows: " << endl;
    ShowArray(arr, num);

    ReverseArray(arr,num);
    cout << "After reverse, the array as follows: " << endl;
    ShowArray(arr, num);

    ReverseArray(arr+1, num-2);
    cout << "After reverse again except the first and the last element, the array as follows: " << endl;
    ShowArray(arr, num);

    return 0;
}

int FillArray(double arr[], int n)
{
    int i;
    for(i = 0; i < n; i++){
        cout << "Enter value #" << i + 1 << " (non-numeric to quit): ";
        if(!(cin >> arr[i]))
            break;
    }
    return i;
}

void ShowArray(double arr[], int n)
{
    for(int i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void ReverseArray(double arr[], int n)
{
    double temp;
    int i, j;
    for(i = 0, j = n - 1; i < j; i++, j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
