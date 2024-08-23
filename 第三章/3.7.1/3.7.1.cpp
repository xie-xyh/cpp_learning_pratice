#include<iostream>

const int k =  12; //转换因子

int main()
{
    unsigned int high;
    
    std::cout << "enter an inch: _ \b\b";
    std::cin >> high;
    int feet = high / k;
    int inch = high % k;
    std::cout << "your high in inch is: " << high << "\n"
              << "your feet is " << feet << "\n"
              << "your inch is " << inch << "\n"
              << std::endl;

    return 0; 

}