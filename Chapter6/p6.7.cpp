#include <iostream>
#include <vector>

int add(int a, int b);
int sub(int a, int b);
int multi(int a, int b);
int divi(int a, int b);

int main()
{
	int (*pAdd) (int, int) = add;
	int (*pSub) (int, int) = sub;
	int (*pMulti) (int, int) = multi;
	int (*pDivi) (int, int) = divi;

	std::vector<decltype(add) *> v = {pAdd, pSub, pMulti, pDivi};

	for (auto i : v)
		std::cout << i(9, 2) << " ";

	return 0;
}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int multi(int a, int b)
{
	return a * b;
}

int divi(int a, int b)
{
	return a / b;
}