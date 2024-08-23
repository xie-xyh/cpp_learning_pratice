#include <iostream>

const int feet2inch = 12;
const double inch2metre = 0.0254;
const double pound2kg = 1 / 2.2;
int main()
{
    using namespace std;
    unsigned int feet,inch;
    double pound,kg;
    cout << "your feet is: _\b";
    cin >> feet;
    cout << "your inch is: _\b";
    cin >> inch;
    cout << "your hight is: _\b";
    cin >> pound;

    double height = (feet * feet2inch + inch) * inch2metre;  
    double weight = pound * pound2kg;
    double BMI = weight / (height * height);

    cout << "your height is " << height << "m" << endl;
    cout << "your weight is " << weight << "kg" << endl;
    cout << "your BMI is " << BMI << endl;
}