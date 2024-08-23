#include <iostream>
int main()
{
    using namespace std;
    cout << "enter your age: ";
    int age{};
    cin >> age;

    cout << "enter your number of hours: ";
    int hours{};
    cin >> hours;

    cout << "enter your number of minutes: ";
    int min{};
    cin >> min;

    cout << "timer: " << hours << ":" << min << endl;

    return 0;
}