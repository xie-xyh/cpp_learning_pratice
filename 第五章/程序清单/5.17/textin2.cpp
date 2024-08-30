#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;

    cout << "enter characters;enter # to quit:\n";
    cin.get(ch);
    while(ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch);//可以读取空格
    }
    cout << endl << count << " characters read\n";
    return 0;
}