#include <iostream>
#include <cstring>

using namespace std;
char *getname(void);

int main()
{
    char * name;

    name = getname();
    cout << name << " at " << (int *) name << "\n";
    delete [] name; // 释放内存

    name = getname();
    cout << name << " at " << (int *)name << "\n";
    delete [] name;
    return 0;
}

char *getname()
{
    char temp[80];
    cout << "enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];//加1是为了包括一个空字符来存储该字符串
    strcpy(pn,temp);
    return pn;
}
