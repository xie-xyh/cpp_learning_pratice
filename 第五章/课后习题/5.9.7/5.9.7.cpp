#include <iostream>

using namespace std;

struct CAR
{
    string producer;
    int year;
};

int main()
{
    int car_number;
    int test;
    cout << "how many cars do you wish to catalog? ";
    cin >> car_number;
    cin.get();

    CAR *cars = new CAR[car_number];
    for (int i = 0; i < car_number; ++i)
    {
        cout << "Car #" << i + 1 << ":" << endl;
        cout << "please enter the make: ";
        getline(cin,(cars + i) -> producer);

        cout << "please enter the year made: ";
        cin >> (cars + i) -> year;
        cin.get();
    }

    cout << "here is your collection:" << endl;
    
    for (int i = 0;i < car_number; i++ )
    {
        cout << (cars + i) -> year << " ";
        cout << (cars + i) -> producer << endl;
    }
    return 0;
}