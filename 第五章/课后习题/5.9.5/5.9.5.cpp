#include <iostream>

const int MONTH_NUMBER = 12;

int main()
{
    using namespace std;
    const char * month[MONTH_NUMBER] = {"Jan", "Feb", "Mar", "Apr",
                              "May", "Jun", "Jul", "Aug", 
                              "Sep", "Oct", "Nov", "Dec"};

    int * num = new int[MONTH_NUMBER];
    int sum = 0;

    for (int i = 0; i < MONTH_NUMBER; ++i)
    {
        cout << * (month + i) << ": ";
        cin >> * (num + i);
    }

    cout << "total sale: ";
    for (int i = 0; i < MONTH_NUMBER; ++i)
    {
        sum += * (num + i);
    }
    cout << sum << endl;

    return 0;
}