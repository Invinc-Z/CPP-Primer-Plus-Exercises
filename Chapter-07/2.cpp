#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int kArrSize = 10;
int FillScores(double [], int);
void ShowScores(double [], int);
double GetAverageScores(double [], int);

int main()
{
    double golf_scores[kArrSize] = {0};
    double average_scores;

    int num = FillScores(golf_scores, kArrSize);
    ShowScores(golf_scores, num);
    average_scores = GetAverageScores(golf_scores, num);
    cout << "The average scores is " << average_scores << endl;

    return 0;
}

int FillScores(double scores[], int n)
{
    int i;
    double temp;
    for(i = 0; i < n; i++){
        cout << "Enter score #" << i + 1 << " (<0 to quit): ";
        cin >> temp;
        if(temp < 0)
            break;
        scores[i] = temp;
    }
    return i;
}

void ShowScores(double scores[], int n)
{
    cout << n << " golf scores as follows: " << endl;
    for(int i = 0; i < n; i++){
        cout << scores[i] << "\t";
    }
    cout << endl;
}

double GetAverageScores(double scores[], int n)
{
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += scores[i];
    }
    return sum / n;
}
