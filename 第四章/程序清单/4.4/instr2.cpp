#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "enter your name:\n";
    cin.get(name,ArSize).get();
    cout << "enter your favorite dessert:\n";
    cin.get(dessert,ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;

}