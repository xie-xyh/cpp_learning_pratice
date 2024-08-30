#include <iostream>
#include <cstring>
#include <string>

using namespace std;
struct pizza
{
    /* data */
    string name;      //公司名字
    double diameter;  //直径
    double weight;    //重量
};

int main()
{
    pizza *p1 = new pizza;
    cout << "enter the diameter of pizza: ";
    cin >> p1 -> diameter;
    cout << "enter thr weight of pizza: ";
    cin >> p1 -> weight;

    cin.get(); //读取回车
    cout << "enter the name of pizza company: ";
    getline(cin,p1 -> name);

    cout << "the name is " << p1 -> name 
         << ", the diameter is " <<  p1 -> diameter
         << ", the weight is: " << p1 -> weight
         << endl;

    return 0;
}