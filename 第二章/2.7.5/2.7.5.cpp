#include <iostream>
double TempTransform(double temp);
int main()
{
    using namespace std;
    cout << "please enter a celsius value: ";
    double celsius;
    cin >> celsius;

    double fahrenheit = TempTransform(celsius);

    cout << celsius << " degrees celsius is " << fahrenheit << " degrees fahrenheit";
}

double TempTransform(double temp)
{
    double value;
    value =  1.8 * temp + 32;
    return value;
}