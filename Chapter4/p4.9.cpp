#include <iostream>

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
	std::cout << sizeof(int) << std::endl;
	std::cout << sizeof(long) << std::endl;
	std::cout << sizeof(short) << std::endl;
	std::cout << sizeof(long long) << std::endl;
	std::cout << sizeof(float) << std::endl;
	std::cout << sizeof(double) << std::endl;
	std::cout << sizeof(bool) << std::endl;
	std::cout << sizeof(char) << std::endl;
}

void func2()
{
	int x[10];
	int *p = x;
	std::cout << sizeof(x) / sizeof(*x) << std::endl;
	std::cout << sizeof(p) / sizeof(*p) << std::endl;
}