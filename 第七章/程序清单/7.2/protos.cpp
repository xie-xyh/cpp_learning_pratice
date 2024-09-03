#include<iostream>

void cheers(int n);
double cube(double x);

int main()
{
    using namespace std;
    cheers(5);
    cout << "give me a number: ";
    double side;
    cin >> side;
    double volumn = cube(side);
    cout << "A " << side << "-foot cube has a volumn of ";
    cout << volumn << " cubic feet.\n";
    cheers(cube(2));
    return 0;
}

void cheers(int n)
{
    using namespace std;
    for(int i = 0;i < n;i++)
    {
        cout << "cheers!";
    }
    cout << endl;
}

double cube(double x)
{
    return x * x * x;
}