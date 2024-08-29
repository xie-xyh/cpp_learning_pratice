#include <iostream>
#include <cstring>
#include <string>

struct pizza
{
    /* data */
    std::string name;      //公司名字
    double diameter;  //直径
    double weight;    //重量
};

int main()
{
    using namespace std;
    pizza p1;
    cout << "enter the name of pizza company: ";
    getline(cin,p1.name);
    cout << "enter the diameter of pizza: ";
    cin >> p1.diameter;
    cout << "enter thr weight of pizza: ";
    cin >> p1.weight;

    cout << "the name is " << p1.name 
         << ", the diameter is " <<  p1.diameter
         << ", the weight is: " << p1.weight
         << endl;

    return 0;
}