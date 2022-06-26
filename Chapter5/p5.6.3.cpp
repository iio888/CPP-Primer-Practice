#include <iostream>
#include <stdexcept>

void func1();
void func2();
void func3();

int main()
{
	//func1();
	//func2();
	func3();

	return 0;
}

void func1()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << a / b << std::endl;
}

void func2()
{
	int a, b;
	std::cin >> a >> b;

	if (b == 0) {
		throw std::runtime_error("0 can't be devided!");	
	}
	std::cout << a / b << std::endl;
}

void func3()
{
	int a, b;
	while (std::cin >> a >> b) {
		try {
			if (b == 0)
				throw std::runtime_error("0 can't be divided!");
		} catch (std::runtime_error err) {
			std::cout << err.what() << std::endl
				<< "Try Again? Enter y or n.\n";
			char choose;
			std::cin >> choose;
			if (!std::cin || choose=='n' || choose=='N')
				break;
		}
	}

	if (b == 0) {
	}
	std::cout << a / b << std::endl;
}
