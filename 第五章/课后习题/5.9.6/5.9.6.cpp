#include <iostream>

const int MONTH_NUMBER = 12;
const int YEAR_NUMBER = 3;

int main()
{
    using namespace std;
    const char * month[MONTH_NUMBER] = {"Jan", "Feb", "Mar", "Apr",
                                        "May", "Jun", "Jul", "Aug", 
                                        "Sep", "Oct", "Nov", "Dec"};

    int num[YEAR_NUMBER][MONTH_NUMBER];
    int sum,total_sum = 0;

    for(int k = 0; k < YEAR_NUMBER; ++k)
    {
        cout << "the " << k + 1 << " year number" << endl;  
        for (int i = 0; i < MONTH_NUMBER; ++i)
        {
            cout << * (month + i) << ": ";
            cin >> num[k][i];
        }
    }

    for(int k = 0; k < YEAR_NUMBER; ++k)
    {
        sum = 0;
        cout << k + 1 << " year sale: ";
        for (int i = 0; i < MONTH_NUMBER; ++i)
        {
            sum += num [k][i];    
        }
        total_sum += sum;
        cout << sum << endl;
    }

    cout << "total sale is: " << total_sum << endl;

    return 0;
}