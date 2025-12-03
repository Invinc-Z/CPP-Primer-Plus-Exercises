#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

struct Patrons{
    string name;
    double contribution;
};

const int GrandLine = 10000;

int main()
{
    cout << "Please enter the number of contributors: ";
    int num;
    cin >> num;

    Patrons* p_Patrons = new Patrons[num];

    for(int i = 0; i < num; i++)
    {
        while(cin.get() != '\n')
            continue;
        cout << "Enter the name of contributor #" << i + 1 << ": ";
        getline(cin, p_Patrons[i].name);
        cout << "Enter the contribution of contributor #" << i + 1 << ": ";
        cin >> p_Patrons[i].contribution;
    }

    cout << "Grand Patrons" << endl;
    int flag_grand = 0;
    for(int i = 0; i < num; i++)
    {
        if(p_Patrons[i].contribution >= GrandLine)
        {
            cout << p_Patrons[i].name << "\t" << p_Patrons[i].contribution << endl;
            flag_grand = 1;
        }
    }
    if(flag_grand == 0)
        cout << "none" << endl;

    cout << "----------------------------" << endl;
    cout << "Patrons" << endl;
    int flag_common = 0;
    for(int i = 0; i < num; i++)
    {
        if(p_Patrons[i].contribution < GrandLine)
        {
            cout << p_Patrons[i].name << "\t" << p_Patrons[i].contribution << endl;
            flag_common = 1;
        }
    }
    if(flag_common == 0)
        cout << "none" << endl;

    return 0;
}
