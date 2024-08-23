#include <iostream>
int main()
{
	//using namespace std;
	std::cout << "输入一个以long为单位的距离" << std::endl;
	int distance;
	std::cin >> distance;
	std::cout << "码数为: " << distance * 220 << std::endl;

	return 0;
}