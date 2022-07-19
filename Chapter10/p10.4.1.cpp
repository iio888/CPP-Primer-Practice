#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <functional>

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
	std::vector<int> v = {1, 2, 3, 3, 2, 4, 1, 9, 8, 5, 2};
	std::list<int> l;
	//unique only removes the adjacent elements
	std::unique_copy(v.begin(), v.end(), std::back_inserter(l));
	for (auto i : l)
		std::cout << i << " ";
	std::cout << std::endl;
}

void func2()
{
	std::vector<int> v;
	for (int i = 1; i<=9; ++i)
		v.push_back(i);
	std::list<int> v_insert, v_back, v_front;
	std::copy(v.begin(), v.end(), std::inserter(v_insert, v_insert.begin()));
	std::copy(v.begin(), v.end(), std::back_inserter(v_back));
	std::copy(v.begin(), v.end(), std::front_inserter(v_front));
	for (auto i : v_insert)
		std::cout << i << " ";
	std::cout << std::endl;
	std::cout << std::endl;
	for (auto i : v_back)
		std::cout << i << " ";
	std::cout << std::endl;
	std::cout << std::endl;
	for (auto i : v_front)
		std::cout << i << " ";
}