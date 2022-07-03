#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <list>

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
	std::string str;
	std::deque<std::string> deq;
	while (std::cin >> str)
		deq.emplace_back(str);
	for (auto it = deq.begin(); it!=deq.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void func2()
{
	std::string str;
	std::list<std::string> deq;
	while (std::cin >> str)
		deq.emplace_back(str);
	for (auto it = deq.begin(); it!=deq.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void func3()
{
	std::list<int> l;
	for (int i = 0; i<10; i++)
		l.emplace_back(i);
	std::deque<int> odds;
	std::deque<int> even;
	for (auto i : l) {
		if (i%2 == 0)
			even.emplace_back(i);
		else
			odds.emplace_back(i);
	}
	for (auto i : odds)
		std::cout << i << " ";
	std::cout << std::endl;
	for (auto i : even)
		std::cout << i << " ";
	std::cout << std::endl;
}