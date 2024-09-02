#include <iostream>
#include <array>
#include <cctype>

const int SIZE = 10;

int main()
{
    using namespace std;
    double sum = 0.0,average = 0.0; //平均值
    unsigned int count = 0; // 多少个数字大于平均值
    array<double,SIZE> donation;
    unsigned int n = 0;

    while (n < SIZE)
    {
        if (!(cin >> donation[n]))
        {
            break;
        }
        sum += donation[n];
        n++;
    }

    average = sum / n;

    for (int i = 0; i < n; i++)
    {
        if(donation[i] > average)
        {
            ++count;
        }
    }

    cout << "average is "<< average << endl;
    cout << "there are " << count << " number larger than average value." << endl;

    return 0;
    
}