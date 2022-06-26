#include <iostream>
#include <initializer_list>
#include <vector>

int calSum(std::initializer_list<int> list);
int calSumVec(std::vector<int>);

int main()
{
	std::cout << calSum({1, 2, 3}) << std::endl;
	std::cout << calSumVec({1, 2, 3, 4}) << std::endl;
	return 0;
}

int calSum(std::initializer_list<int> list)
{
	int sum = 0;
	for (auto i : list)
		sum += i;
	return sum;
}

int calSumVec(std::vector<int> v)
{
	int sum = 0;
	for (auto i : v)
		sum += i;
	return sum;
}
