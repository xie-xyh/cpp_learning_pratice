#include <iostream>
#include <ctime>
int main()
{
    using namespace std;
    cout << "enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;

    cout << "starting\a\n";
    
}