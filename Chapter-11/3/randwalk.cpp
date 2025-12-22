// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib> // rand(), srand() prototypes
#include <ctime> // time() prototype
#include <climits>
#include "vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0)); // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    unsigned long tot_steps = 0;
    unsigned long max_steps = 0;
    unsigned long min_steps = UINT_MAX;
    double average_steps;
    double target;
    double dstep;
    int trials;
    int count_trial = 0;
    cout <<"Enter the number of trials: ";
    cin >> trials;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        tot_steps += steps;
        if(max_steps < steps)
            max_steps = steps;
        if(min_steps > steps)
            min_steps = steps;
        cout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
            << result.magval()/steps << endl << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        count_trial++;
        if(count_trial >= trials)
            break;

        cout << "Enter target distance (q to quit): ";
    } 

    // bound condition 
    if(count_trial == 0){
        min_steps = 0;
        average_steps = 0;
    }
    else
        average_steps = tot_steps * 1.0 / count_trial;

    cout << "After " << count_trial << " trails," << endl;
    cout << "the highest steps is: " << max_steps << endl;
    cout << "the lowest steps is: " << min_steps << endl;
    cout << "and the average steps is: " << average_steps << endl;
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}
