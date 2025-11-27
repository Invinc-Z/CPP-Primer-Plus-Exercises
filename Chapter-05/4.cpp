#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    double Daphne_investment = 100.0; // Daphne's initial investment
    double Daphne_money = 100.0; // Daphne's total money
    double Cleo_investment = 100.0; // Cleo's initial investment
    double Cleo_money = 100.0; // Cleo's total money
    double Daphne_rate = 0.1; // Daphne's annual interest rate
    double Cleo_rate = 0.05; // Cleo's annual interest rate
    int years = 0;

    while (Cleo_money <= Daphne_money) {
        Daphne_money += Daphne_investment * Daphne_rate; // 计算Daphne的投资增长
        Cleo_money += Cleo_money * Cleo_rate; // 计算Cleo的投资增长
        years++;
    }
    cout << "It will take " << years << " years for Cleo's investment to exceed Daphne's investment." << endl;
    cout << "Daphne's investment after " << years << " years: $" << Daphne_money << endl;
    cout << "Cleo's investment after " << years << " years: $" << Cleo_money << endl;

    return 0;
}

