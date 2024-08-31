#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    cout << "enter words (to stop, type the word done):";
    string ch;
    int number = 0;
    while (ch != "done")
    {       
        cin >> ch;
        if (ch != "done")
        {
            number++;
        }
    }
    cout << number << endl;
    return 0;
}