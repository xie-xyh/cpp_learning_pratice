#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char first_name[40];
    char last_name[40];
    char name[50];
    cout << "enter your first name: ";
    cin >> first_name;
    cout << "enter your last name: ";
    cin >> last_name;
    strcpy(name,last_name);
    strcat(name,", ");
    strcat(name,first_name);
    cout << "here is the information in a single string: " << name <<  endl;

    return 0;
}