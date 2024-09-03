#include <iostream>
#include <string>

using namespace std;
const int MAX_MONEY = 10000;
//储存捐款人的名字和捐款金额
struct patron
{
    string name;
    double money;
};

int main()
{
    int number; //捐款者数目
    cout << "please enter the number of contributor: ";
    cin >> number;
    cin.get(); //读取回车字符
    patron *contributor = new patron[number];
    for (int i = 0; i < number; i++)
    {
        cout << "enter the name of contributor: ";
        getline(cin,contributor[i].name);
        cout << "enter the amount of donation: ";
        cin >> contributor[i].money;
        cin.get();
    }
    
    cout << "--------- grand patrons: ---------" << endl;

    int max_count = 0; // 捐款人计数
    for (int i = 0; i < number; i++)
    {
        if (contributor[i].money > MAX_MONEY)
        {
            cout << "contributor name: \t" << contributor[i].name << endl;
            cout << "contributor amount: \t" << contributor[i].money << endl;
            max_count++;
        }
            
    }

    if (max_count == 0)
    {
        cout << "none" << endl;
    }

    cout << "---------- patrons: ---------" << endl;
    int min_count = 0;
    for (int i = 0; i < number; i++)
    {
        if (contributor[i].money < MAX_MONEY)
        {
            cout << "contributor name: \t" << contributor[i].name << endl;
            cout << "contributor amount: \t" << contributor[i].money << endl;
            min_count++;
        }
    }
    
    if (min_count == 0)
    {
        cout << "none" << endl;
    }

    delete[] contributor; 
    return 0;    
}