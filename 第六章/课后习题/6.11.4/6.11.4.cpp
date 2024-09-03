#include <iostream>

const int strsize = 80;

struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

const int number = 5;
const bop people[number] = {
    {"Wimp Macho", "bbb", "c", 0},
    {"Raki Rhodes", "2XXXX", "3XXXXX", 1},
    {"Celia Laiter", "2AAAA", "3AAAAA", 2},
    {"Hoppy Hipman", "2BBBB", "3BBBBB", 0},
    {"Pat Hand", "4CCCC", "3CCCCC", 1}
};

int main()
{
    using namespace std;
    int t = 0;
    cout << "benevolent order of programmers report" << endl;
    cout << "a. display by name\tb. display by title\n";
    cout << "c. display by bopname\td. display bt preference\n";
    cout << "q. quit" << endl;
    cout << "enter your choice: ";
    char ch;
    while (cin >> ch)
    {
        if (ch == 'q')
        {
            cout << "bye" << endl;
            break;
        }
        
        for (int i = 0; i < number; i++)
        {
            switch (ch)
            {
                case 'a':
                    cout << people[i].fullname << endl;
                    break;
                case 'b':
                    cout << people[i].title << endl;
                    break;
                case 'c':
                    cout << people[i].bopname << endl;
                    break;
                case 'd':
                    t = people[i].preference;
                    switch (t)
                    {
                        case 0:
                            cout << people[i].fullname << endl;
                            break;
                        case 1:
                            cout << people[i].title << endl;
                            break;
                        case 2:
                            cout << people[i].bopname << endl;
                            break;
                    };
                    break;
                default:
                    break;
            } 
        }
        cout << "next choice: ";
    }
}