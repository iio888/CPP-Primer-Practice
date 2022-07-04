#include <iostream>
#include <list>
#include <forward_list>

void func1();

int main()
{
	func1();
}

void func1()
{
	std::list<int> l;
	for (int i = 0; i!=10; ++i)
		l.emplace_back(i);
	auto iter = l.begin();

	while (iter != l.end()) {
		if (*iter % 2)
			l.insert(iter, *iter);
		else
			l.erase(iter);
		++iter;
	}

	for (auto i : l)
		std::cout << i << " ";
	std::cout << std::endl;
}