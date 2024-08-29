#include <iostream>
#include <string>
struct CandyBar
{
    /* data */
    // char brand[40];
    std::string brand;
    double weight;
    int calorie;
};

int main()
{
    using namespace std;
    CandyBar snack[3] = {
        {"Mocha Munch" , 2.3 , 350},
        {"Mocha Munch2" , 2.4 , 360},
        {"Mocha Munch3" , 2.5 , 370}
        };
    cout << "snac0's brand is "<< snack[0].brand << endl;
    cout << "snac0's weight is "<< snack[0].weight << endl;
    cout << "snac0's calorie is "<< snack[0].calorie << endl;
    cout << "\n";

    cout << "snac1's brand is "<< snack[1].brand << endl;
    cout << "snac1's weight is "<< snack[1].weight << endl;
    cout << "snac1's calorie is "<< snack[1].calorie << endl;
    cout << "\n";
    
    cout << "snac2's brand is "<< snack[2].brand << endl;
    cout << "snac2's weight is "<< snack[2].weight << endl;
    cout << "snac2's calorie is "<< snack[2].calorie << endl;

    return 0;
}