#include<iostream>
int main()
{
    using namespace std;
    cout << "enter a number: " << endl;
    int number;   
    while (cin >> number)
    {
        double tax = 0; // 税收
        if (number > 0)
        {
            if (number <= 5000)
            {
                tax = 0;
            }
            else if (number <= 15000)        
            {
                tax = (number-5000) * 0.1;
            }
            else if (number <= 35000)
            {
                tax = 15000 * 0.1 + (number - 15000) * 0.15;
            }
            else
            {
                tax = 15000 * 0.1 + 35000 * 0.15 + (number - 35000) * 0.2;
            }
            cout << "tax is " << tax << endl;
        }
        else
        {
            break;
        }
        cout << "please enter again: ";
    }
}