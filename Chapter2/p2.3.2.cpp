#include <iostream>

int main()
{
	int *p = nullptr;
	int a = 10;
	p = &a;
	std::cout << "before:" << std::endl;
	std::cout << p << " " << *p << std::endl;

	std::cout << "after:" << std::endl;
	int b = 20;
	p = &b;
	std::cout << p << " ";
	*p = 5;
	std::cout << *p <<std::endl;
	
	return 0;
}