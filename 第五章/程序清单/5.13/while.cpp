#include <iostream>
const int ArSize = 20;
int main()
{
    using namespace std;
    char name[ArSize];
    cout << "your first name, please: ";
    cin >> name;
    cout << "here is your name, verticalized and ASCLLized:\n";
    int i = 0;
    while (name[i] != '\0')
    {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;
    }
    return 0;
}