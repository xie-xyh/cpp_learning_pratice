#include <iostream>
int main()
{
    using namespace std;
    double degrees,minutes,seconds;
    cout << "enter a latitude in degrees, mintues, and seconds:" 
         << "\nfirst,enter the degrees: ";
    cin >> degrees;
    cout << "next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "finally, enter the seconds of arc: ";
    cin >> seconds;
    double latitude = (seconds / 60 + minutes) / 60 + degrees;
    cout << degrees << " degrees, " 
         << minutes << " minutes, " 
         <<  seconds << " seconds = " 
         << latitude << " degrees"
         << endl;

    return 0;
    
}
