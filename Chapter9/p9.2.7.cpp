#include <iostream>
#include <vector>
#include <list>

void func1();
void func2();

int main()
{
	func1();
	func2();

	return 0;
}

void func1()
{
	std::vector<int> v1 = {1, 2, 3};
	std::vector<int> v2 = {3, 2, 3};
	std::cout << (v1 == v2) << std::endl;
}

void func2()
{
	std::list<int> l = {3, 2, 3, 4, 5};
	std::vector<int> v = {3, 2, 3};

	auto it1 = l.begin();
	auto it2 = v.begin();
	bool flag = true;
	for (; it1!=l.end() && it2!=v.end(); it1++, it2++) {
		if (*it1 != *it2) {
			flag = false;
			break;
		}
	}
	if (it1!=l.end() || it2!=v.end())
		flag = false;
	std::cout << flag << std::endl;
}
