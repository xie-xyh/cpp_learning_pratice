#include <iostream>

const int INVEST_NUM = 100;

int main()
{
    using namespace std;
    double daphe_profit,cleo_profit = 0;
    int year = 0;

    while(cleo_profit <= daphe_profit)
    {
        daphe_profit += 0.10 * INVEST_NUM;
        cleo_profit += 0.05 * (INVEST_NUM + cleo_profit);
        year++;
    }

    cout << year << endl;
    cout << "daphe: " << INVEST_NUM + daphe_profit << endl;
    cout << "cleo: " << INVEST_NUM + cleo_profit << endl;

    return 0;
}