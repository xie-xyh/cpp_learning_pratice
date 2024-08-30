#include <iostream>
int main()
{
    using namespace std;

    double arr[5] = {21.1,32.8,23.4,45.2,37.4};
    double *pt = arr;
    // pt++;

    cout << *pt++ << endl;
    cout << *pt <<endl;
}