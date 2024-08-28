#include<iostream>
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
    CandyBar snack = {"Mocha Munch" , 2.3 , 350};
    cout << "snac's brand is "<< snack.brand << endl;
    cout << "snac's weight is "<< snack.weight << endl;
    cout << "snac's calorie is "<< snack.calorie << endl;
    return 0;
}