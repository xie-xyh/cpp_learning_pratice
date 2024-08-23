#include <iostream>
int main()
{
    long long world,us;
    using namespace std;
    cout << "enter the world's population: ";
    cin >> world;
    cout << "enter the population of the US: ";
    cin >> us;
    // 由于cpp采用了整数除法，因此，这样算出来的结果是0，需要进行强制类型转换
    // double proportion = us / world; 

    double proportion = static_cast<double>(us) / world;//和double(us)等价
    cout << "the poputation of the US is " << proportion * 100 << "% of the world population." << endl;
}