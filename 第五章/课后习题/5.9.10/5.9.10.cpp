#include <iostream>
int main()
{
    using namespace std;
    int line_number;
    cout << "enter number of rows: ";
    cin >> line_number;
    for (int i = 0; i < line_number; i++)
    {
        for (int k = line_number - i - 1; k > 0; k--)
        {
            cout << ".";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}