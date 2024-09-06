#include <iostream>
#include <string>
#include <fstream>

using namespace std;
const int MAX_MONEY = 10000;
string filename;
//储存捐款人的名字和捐款金额
struct patron
{
    string name;
    double money;
};

int main()
{
    int number; //捐款者数目
    ifstream in_handle_file;
    cout << "please enter a filename: ";
    getline(cin,filename); 

    in_handle_file.open(filename.c_str());
    in_handle_file >> number;
    in_handle_file.get(); //读回车符

    patron *contributor = new patron[number];
    for (int i = 0; i < number; i++)
    {
        getline(in_handle_file,contributor[i].name);
        in_handle_file >> contributor[i].money;
        in_handle_file.get(); //读回车符
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