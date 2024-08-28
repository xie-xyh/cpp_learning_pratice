#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    string first_name,last_name,name;
    cout << "enter your first name: ";
    getline(cin,first_name);
    //cin.getline(first_name,20);//期望的是char数组
    cout << "enter your last name: ";
    cin >> last_name;
    //处理的是C风格的字符串，char类型的
    // strcpy(name,last_name);
    // strcat(name,", ");
    // strcat(name,first_name);
    name = last_name + "," + first_name;
    cout << "here is the information in a single string: " << name <<  endl;

    return 0;
}