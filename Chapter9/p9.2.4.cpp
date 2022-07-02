#include <iostream>
#include <vector>
#include <list>

void printVec(std::vector<int> v);
void printVecDouble(std::vector<double> v);
void func1();
void func2();

int main()
{
	//func1();
	func2();

	return 0;
}

void printVec(std::vector<int> v)
{
	for (auto i : v)
		std::cout << i << " ";
}
void printVecDouble(std::vector<double> v)
{
	for (auto i : v)
		std::cout << i << " ";
}

void func1()
{
	std::vector<int> v1(10);
	std::vector<int> v2(10, 1);
	std::vector<int> v3 = {1, 2, 3};
	std::vector<int> v4 = v3;
	std::vector<int> v5(v3);
	std::vector<int> v6(v3.begin(), v3.end());

	printVec(v1);
	std::cout << std::endl;
	printVec(v2);
	std::cout << std::endl;
	printVec(v3);
	std::cout << std::endl;
	printVec(v4);
	std::cout << std::endl;
	printVec(v5);
	std::cout << std::endl;
	printVec(v6);
	std::cout << std::endl;
}
void func2()
{
	std::list<int> l = {1, 2, 3};
	std::vector<double> v1(l.begin(), l.end());
	std::vector<int> vi = {4, 5, 6};
	std::vector<double> v2(vi.begin(), vi.end());

	printVecDouble(v1);
	std::cout << std::endl;
	printVecDouble(v2);
	std::cout << std::endl;
}