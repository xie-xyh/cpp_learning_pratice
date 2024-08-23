#include <iostream>

int generate_string_1();
int generate_string_2();
int main()
{
    generate_string_1();
    generate_string_1();
    generate_string_2();
    generate_string_2();
}

int generate_string_1()
{
    std::cout << "three blind mice" << std::endl;
}

int generate_string_2()
{
    std::cout << "see how they run" << std::endl;
}
