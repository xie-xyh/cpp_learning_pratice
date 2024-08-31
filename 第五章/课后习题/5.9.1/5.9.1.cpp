#include <iostream>
int main()
{
    using namespace std;
    cout << "enter two integer: ";
    int num1,num2;
    int sum = 0;
    cin >> num1;
    cin >> num2;
    while (num1 < num2)
    {
        sum += num1;
        num1++;
    }
    
    sum += num2;
    
    cout << sum << endl;
    return 0;
}