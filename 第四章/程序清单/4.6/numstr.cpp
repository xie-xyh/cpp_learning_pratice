#include<iostream>
int main()
{
    using namespace std;
    cout << "what year was your house built?\n";
    int year;
    cin >> year;
    cout << "what is its street address?\n";
    char address[80];
    cin.getline(address,80);
    cout << "year built: " << year << endl;
    cout << "address: " << address << endl;
    cout << "done!\n";
    return 0;
}