#include <iostream>
int main()
{
    using namespace std;
    int x;

    cout << "the expression 'x = 100' has the value ";
    cout << (x = 100) << endl;

    cout << "the expression 'x < 3' has the value ";
    cout << (x < 3) << endl;

    cout << "the expression 'x > 3' has the value ";
    cout << (x > 3) << endl;

    cout.setf(ios_base::boolalpha);

    cout << "the expression 'x < 3' has the value ";
    cout << (x < 3) << endl;

    cout << "the expression 'x > 3' has the value ";
    cout << (x > 3) << endl;

    return 0;

}
