#include <iostream>

int func1(const int a, const int *p);
void func2(int *(&p1), int *(&p2));
void myPrint(const int *a, const int size);

int main()
{
	int a = 10;
	int b = 20;
	int *p = &b;
	std::cout << func1(a, p) << std::endl;

	int *p1 = &a;
	int *p2 = &b;
	func2(p1, p2);
	std::cout << *p1 << " " << *p2 << std::endl;

	int i = 0, j[2] = {0, 1};
	myPrint(&i, 1);
	std::cout << std::endl;
	myPrint(j, 2);

	return 0;
}

int func1(const int a, const int *p)
{
	if (a > *p)
		return a;
	else
		return *p;
}

void func2(int *(&p1), int *(&p2))
{
	int *t = p1;
	p1 = p2;
	p2 = t;
}


void myPrint(const int *a, const int size)
{
	for (int i = 0; i<size; i++)
		std::cout << *a + i << " ";
}
