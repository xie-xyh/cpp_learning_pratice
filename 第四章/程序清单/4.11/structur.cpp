#include <iostream>
struct inflatable
{
    /* data */
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest = 
    {
        "Golorious Gloria", //name
        1.88,               //volume value
        29.99               //price
    };

    inflatable pal = 
    {
        "Audacious Arthur",
        3.12,
        32.99
    };

    cout << "expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    cout << "you can have both for $";
    cout << guest.price + pal.price << "!\n";

    return 0;
}
