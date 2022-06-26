#include <iostream>
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
	int i = 0, &r = i;
	auto a = r;

	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;

	const auto f = ci;

	auto &g = ci;
	//auto &h = 42;
	const auto &j = 42;

	auto k = ci, &l = i;
	auto &m = ci, *p = &ci;
	//auto &n = i, *p2 = &ci;

	std::cout << "before:\n";
	std::cout << a << " " << b << " " << c << " " << d << " " << e << " " << g << "\n";

	a = 42; b = 42; c = 42;
	//d = 42; e = 42; g = 42;

	std::cout << "after:\n";
	std::cout << a << " " << b << " " << c << " " << d << " " << e << " " << g << "\n";
}

void func2()
{
	//2.35
	const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;
}

void func3()
{
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype(a = b) d = a;
}