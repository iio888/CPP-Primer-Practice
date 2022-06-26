#include <iostream>

void func1(int (&a)[3][4]);
void func2(int (&a)[3][4]);
void func3(int (&a)[3][4]);

int main()
{
	int a[3][4] = {0};
	for (int i = 0; i!=3; i++)
		for (int j = 0; j!=4; j++)
			a[i][j] = i*10 + j;

	//func1(a);
	//func2(a);
	func3(a);

	return 0;
}

void func1(int (&a)[3][4])
{
	//Version 1
	for (int (&i)[4] : a) {
		for (int j : i)
			std::cout << j << "\t";
		std::cout << std::endl;
	}
	std::cout << std::endl;

	//Version 2
	for (int i = 0; i!=3; i++) {
		for (int j = 0; j!=4; j++)
			std::cout << a[i][j] << "\t";
		std::cout << std::endl;
	}
	std::cout << std::endl;

	//Version 3
	for (int (*p)[4] = std::begin(a); p!=std::end(a); p++) {
		for (int *q = std::begin(*p); q!=std::end(*p); q++)
			std::cout << *q << "\t";
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void func2(int (&a)[3][4])
{	
	using int_arr = int[4];
	
	//Version 1
	for (int_arr &i : a) {
		for (int j : i)
			std::cout << j << "\t";
		std::cout << std::endl;
	}
	std::cout << std::endl;

	//Version 2
	for (int i = 0; i!=3; i++) {
		for (int j = 0; j!=4; j++)
			std::cout << a[i][j] << "\t";
		std::cout << std::endl;
	}
	std::cout << std::endl;

	//Version 3
	for (int_arr *p = std::begin(a); p!=std::end(a); p++) {
		for (int *q = std::begin(*p); q!=std::end(*p); q++)
			std::cout << *q << "\t";
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void func3(int (&a)[3][4])
{
	//Version 1
	for (auto &i : a) {
		for (auto j : i)
			std::cout << j << "\t";
		std::cout << std::endl;
	}
	std::cout << std::endl;

	//Version 2
	for (auto i = 0; i!=3; i++) {
		for (auto j = 0; j!=4; j++)
			std::cout << a[i][j] << "\t";
		std::cout << std::endl;
	}
	std::cout << std::endl;

	//Version 3
	for (auto p = std::begin(a); p!=std::end(a); p++) {
		for (auto q = std::begin(*p); q!=std::end(*p); q++)
			std::cout << *q << "\t";
		std::cout << std::endl;
	}
	std::cout << std::endl;
}