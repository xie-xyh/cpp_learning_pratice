#include<iostream>
int main()
{
    using namespace std;
    cout << "please enter one of the following choice: " << endl;
    cout << "c) carnivore\tp) pianist\nt) tree    \tg) game" << endl;
    char ch;
    while(cin.get(ch))
    {
        if ((ch == 'c')||(ch == 'p')||(ch == 't')||(ch == 'g'))
        {
            switch (ch)
            {
            case 'c':
                cout << "a maple is a carnivore." << endl;
                break;
            case 'p':
                cout << "a maple is a pianist." << endl;
                break;
            case 't':
                cout << "a maple is a tree." << endl;
                break;
            case 'g':
                cout << "a maple is a game." << endl;
                break;
            }
            break;
        }
        else
        {
            cout << "please enter a c,p,t or g: ";
        }
    }
    return 0;
}
