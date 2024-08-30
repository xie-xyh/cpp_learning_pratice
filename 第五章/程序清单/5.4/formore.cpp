#include <iostream>
const int ArSize = 16;
int main()
{
    long factorials[ArSize];
    factorials[1] = factorials[0] = 1;//ll是指long long类型，确保类型的一致性
    for (int i = 2; i < ArSize; i++)
    {
        factorials[i] = i * factorials[i - 1];
    }
    for (int i = 0; i < ArSize; i++)
    {
        std::cout << i << "! = " << factorials[i] << std::endl;
    }

    return 0;

}