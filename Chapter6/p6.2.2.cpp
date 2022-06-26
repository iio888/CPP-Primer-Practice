#include <iostream>

void func1();
void func2();
void reset(int &a);
void swap(int &a, int &b);

int main()
{
	//func1();
	func2();

	return 0;
}

void func1()
{
	int a;
	std::cin >> a;
	reset(a);
	std::cout << "Now a equals " << a << std::endl;
}
void reset(int &a)
{
	std::cin >> a;
}

void func2()
{
	int a, b;
	std::cin >> a >> b;
	swap(a, b);
	std::cout << a << " "<< b;
}
void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}