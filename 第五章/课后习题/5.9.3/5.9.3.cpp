#include <iostream>
int main()
{
    using namespace std;
    cout << "enter a number: ";

    double sum = 0;
    double num;

    cin >> num;
    while(num != 0)
    {
        sum += num;
        cin >> num;
    }

    cout << sum << endl;
    return 0;
}