#include <iostream>

double lightyears2astronomical(double light_years)
{
    return light_years * 63240;
}

int main()
{
    using namespace std;
    cout << "enter the number of light years: ";
    double light_years;
    cin >> light_years;
    cout << light_years 
         << " light years = " 
         << lightyears2astronomical(light_years) 
         << " astronomical units" << endl;

    return 0;
}