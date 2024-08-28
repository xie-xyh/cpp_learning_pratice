#include <iostream>
int main()
{
    using namespace std;
    double wages[3] = {10000.0,20000.0,30000.0};
    short stacks[3] = {3,2,1};

    double * pw = wages;
    short * ps = &stacks[0]; // 这两个是等价的

    cout << "pw = " << pw << ", *pw = " << *pw << endl;

    pw = pw + 1;
    cout << "add 1 to the pw pointer: \n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n";

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "ps = " << ps << ", *ps = " << *ps << endl;

    cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
    cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1) << endl;

    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";

    return 0;
}