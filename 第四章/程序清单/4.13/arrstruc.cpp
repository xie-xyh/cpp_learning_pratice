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
    inflatable guests[2] = 
    {
        {"bambi",0.5,21.99},
        {"godzilla",2000,565.99}
    };

    cout << "the guests " << guests[0].name << "and " << guests[1].name
         << "\nhave a combined volume of "
         << guests[0].volume + guests[1].volume << " cubic feet.\n";

    return 0;
}