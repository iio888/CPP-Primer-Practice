#include <iostream>

void func1(int a);
int func2();

int main()
{
	for (int i=0; i<5; i++)
		func1(i);
	for (int i = 0; i<5; i++)
		std::cout << func2() << std::endl;

	return 0;
}

void func1(int a)
{
	static int sum = 0;
	int ratio = 2;
	sum += (ratio * a);
	std::cout << sum << std::endl;
}

int func2()
{
	static int cnt = 0;
	return cnt++;
}