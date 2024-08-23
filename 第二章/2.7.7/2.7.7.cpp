#include <iostream>
void show(int hours,int minutes);
int main()
{
    using namespace std;
    int hours,minutes;
    cout << "enter the number of hours: ";
    cin >> hours;
    cout << "enter the number of minutes: ";
    cin >> minutes;
    show(hours,minutes);
    return 0;
}

void show(int hours,int minutes)
{
    
    std::cout << "time: " << hours << ":" << minutes << std::endl;

}