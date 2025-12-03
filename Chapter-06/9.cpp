#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::endl;
using std::cin;
using std::ifstream;
using std::string;

struct Patrons{
    string name;
    double contribution;
};

const int GrandLine = 10000;

int main()
{
    ifstream ifs;
    ifs.open("9.txt");
    if(!ifs.is_open()){
        cout << "failed to open file" << endl;
        return -1;
    }

    int num;
    ifs >> num;

    Patrons* p_Patrons = new Patrons[num];

    for(int i = 0; i < num; i++)
    {
        while(ifs.get() != '\n')
            continue;
        getline(ifs, p_Patrons[i].name);
        ifs >> p_Patrons[i].contribution;
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

    ifs.close();
    return 0;
}
