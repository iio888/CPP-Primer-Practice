#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

void func1();
void func2();

int main()
{
	//func1();
	func2();

	return 0;
}

void func1()
{
	std::vector<int> vi = {1, 2, 3, 4, 5};
	std::cout << std::accumulate(vi.begin(), vi.end(), 0) << std::endl;
}

void func2()
{
	std::vector<double> vi = {1.1, 2.2, 3.3, 4.4, 5.5};
	std::cout << std::accumulate(vi.begin(), vi.end(), 0) << std::endl;
}