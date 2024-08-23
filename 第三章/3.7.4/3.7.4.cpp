#include <iostream>
const int second2day = 3600 * 24;
const int second2hout = 3600;
const int second2minute = 60;

int main()
{
    long long seconds; //和long long int是完全等价的
    using namespace std;

    cout << "enter the number of seconds: ";
    cin >> seconds;

    int days = seconds / second2day;
    int hour = (seconds % second2day) / second2hout;
    int minutes = ((seconds % second2day) % second2hout) / second2minute;
    int second = ((seconds % second2day) % second2hout) % second2minute;
    cout << seconds << " seconds = " << days << "days, " 
         << hour << " hours, "
         << minutes << " minutes, " 
         << second << " seconds " << endl;
}