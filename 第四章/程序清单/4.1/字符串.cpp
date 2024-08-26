#include <iostream>
int main()
{
    char dog[8] = {'b','e','a','u','x',' ','I','I'};      //不是字符串
    char cat[8] = {'f','a','t','e','s','s','a','\0'};     //是字符串
    std::cout << dog << std::endl;
    std::cout << cat << std::endl;

    char bird[11] = "Mr.Cheeps";
    char fish[] = "Bubble";
    std::cout << bird << std::endl;
    std::cout << fish << std::endl;
    return 0;
}