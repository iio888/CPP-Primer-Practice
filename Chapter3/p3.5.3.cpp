#include <iostream>
#include <vector>
#include <iterator>

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
	int a[] = {1, 2, 3, 5, 6};
	int *p = a;
	int *last = std::end(a);
	for (auto i : a)
		std::cout << i << " ";
	std::cout << std::endl;

	while (p != last) {
		*p = 0;
		p++;
	}
	for (auto i : a)
		std::cout << i << " ";
}

void func2()
{
	int a[] = {1, 2, 3, 4, 5};
	int b[] = {1, 2, 3, 4, 5, 6};
	bool flag = true;
	int *i = std::begin(a);
	int *j = std::begin(b);
	for ( ; i!=std::end(a) && j!=std::end(b); i++, j++)
		if (*i != *j) {
			flag = false;
			break;
		}
	if (flag && i==std::end(a) && j==std::end(b))
		std::cout << "Equal!" << std::endl;
	else
		std::cout << "Not Equal!" << std::endl;
}

void func3()
{
	std::vector<int> a = {1, 2, 3, 4, 5};
	std::vector<int> b = {1, 2, 3, 4, 5};
	if (a == b)
		std::cout << "Equal!" << std::endl;
	else
		std::cout << "Not Equal!" << std::endl;

}