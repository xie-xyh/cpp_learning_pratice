#include <iostream>
int main()
{
    using namespace std;
    cout << "the amazing accounto will sum and average ";
    cout << "five numbers for you.\n";
    cout << "please enter five values:\n";

    double number;
    double sum = 0.0;
    for (int i = 1; i <= 5; i++)
    {
        cout << "value " << i << ": ";
        cin >> number;
        sum += number;
    }
    cout << "five exquisite choices indeed! ";
    cout << "they sum to " << sum << endl;
    cout << "and average to " << sum / 5 << endl;
    cout << "the amazing accounto bids you adieu!\n";

    return 0;
}