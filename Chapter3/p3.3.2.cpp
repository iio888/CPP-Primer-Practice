#include <iostream>
#include <string>
#include <vector>
void func1();
void func2();

int main()
{
	//func1();
	func2();

	return 0;
}

void func1()
{
	int num;
	std::vector<int> v;
	while (std::cin >> num)
		v.push_back(num);
	for (auto i : v)
		std::cout << i << " ";
}

void func2()
{
	std::string num;
	std::vector<std::string> v;
	while (std::cin >> num)
		v.push_back(num);
	for (auto i : v)
		std::cout << i << " ";
}
