#include <iostream>
#include <string>
int main()
{
    using namespace std;
    cout << "what is your first name? ";
    string first_name,last_name;
    char grade;
    // cin.getline(name,20);
    getline(cin,first_name);
    cout << first_name << endl;

    cout << "what is your last name? ";
    getline(cin,last_name);
    cout << last_name << endl;
    
    cout << "what letter grade do you deserve? ";
    cin >> grade;
    cout << grade << endl;

    int age;
    cout << "what is your age? ";
    cin >> age;
    cout << age << endl;

    cout << "name: " << last_name << ", " << first_name << endl;
    // cout << "grade: " << grade << endl;
    cout << "grade: " << char(grade + 1) << endl;
    cout << "age: " << age << endl;

    return 0;
}
