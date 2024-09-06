#include <iostream>
#include <string>
#include <cctype>
int main()
{
    using namespace std;

    string input;
    int vowels = 0,consonants = 0,other = 0;
    cout << "enter words(q to quit):" << endl;

    while (cin >> input)
    {
        if (input == "q")
        {
            break;
        }

        if (isalpha(input[0]))
        {
            switch (toupper(input[0]))
            {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowels++;
                break;
            default:
                consonants++;
                break;
            }
        }
        else
        {
            other++;
        }
    }

    cout << vowels << " words beginning with vowels." << endl;
    cout << consonants << " words beginning with consonants." << endl;
    cout << other << " others." << endl;

    return 0;
}