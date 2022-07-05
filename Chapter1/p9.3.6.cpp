#include <iostream>
#include <vector>
#include <list>
#include <forward_list>

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
	std::list<int> l;
	for (int i = 0; i!=10; ++i)
		l.emplace_back(i);
	auto iter = l.begin();

	while (iter != l.end()) {
		if (*iter % 2) {
			l.insert(iter, *iter);
			++iter;
		}
		else
			iter = l.erase(iter);
	}

	for (auto i : l)
		std::cout << i << " ";
	std::cout << std::endl;
}

void func2()
{
	std::vector<int> v;
	for (int i = 0; i!=10; ++i)
		v.emplace_back(i);

	auto begin = v.begin(), end = v.end();
	while (begin != v.end()) {
		++begin;
		v.insert(begin, 42);
		++begin;
	}

	for (auto i : v)
		std::cout << i << " ";
	std::cout << std::endl;
}

void func3()
{
	std::vector<int> vi;
	for (int i = 0; i!=10; ++i)
		vi.emplace_back(i);

	auto iter = vi.begin();
	while (iter != vi.end()) {
		if (*iter % 2) {
			iter = vi.insert(iter, *iter);
			++iter;
		}
		++iter;
	}
	
	for (auto i : vi)
		std::cout << i << " ";
	std::cout << std::endl;
}