#include <iostream>
#include <fstream>
int main()
{
    using namespace std;
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;
    outFile.open("carinfo.txt");

    cout << "enter the make and model of automobile: ";
    cin.getline(automobile,50);
    cout << "enter the model year: ";
    cin >> year;
    cout << "enter thr original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    //display information on screen with cout

    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "make and model: " << automobile << endl;
    cout << "year: " << year << endl;
    cout << "was asking $" << a_price << endl;
    cout << "now asking $" << d_price << endl;

    //do exact same things using out file instead of cout
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "make and model: " << automobile << endl;
    outFile << "year: " << year << endl;
    outFile << "was asking $" << a_price << endl;
    outFile << "now asking $" << d_price << endl;

    outFile.close();
    return 0;
}