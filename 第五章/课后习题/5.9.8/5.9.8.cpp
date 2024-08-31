#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    cout << "enter words (to stop, type the word done):";
    char ch[80];
    int number;
    while (strcmp(ch,"done") != 0)
    {       
        cin >> ch;
        if (strcmp(ch,"done") != 0)
        {
            number++;
        }
    }
    cout << number << endl;
    return 0;
}