#include <iostream>

int fact(int num);
void func2();
void func3(int num);

int main()
{
	std::cout << fact(5) << std::endl;
	func2();
	func3(-2);
	return 0;
}

int fact(int num)
{
	int sum = 1;
	while (num) {
		sum *= num;
		num--;
	}
	return sum;
}

void func2()
{
	int n;
	std::cin >> n;
	std::cout << fact(n) << std::endl;
}

void func3(int num)
{
	if (num < 0)
		std::cout << -num;
	else
		std::cout << num;
}