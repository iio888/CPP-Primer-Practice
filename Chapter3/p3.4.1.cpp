#include <iostream>
#include <vector>
#include <string>

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

	std::vector<int> v1;
	std::vector<int> v2(10);
	std::vector<int> v3(10, 42);
	std::vector<int> v4 {10};
	std::vector<int> v5 {10, 42};
	std::vector<std::string> v6 {10};
	std::vector<std::string> v7 {10, "hi"};

	std::cout << "capacity: " << v1.capacity() << std::endl;
	for (auto it=v1.cbegin(); it!=v1.cend(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "capacity: " << v2.capacity() << std::endl;
	for (auto it=v2.cbegin(); it!=v2.cend(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "capacity: " << v3.capacity() << std::endl;
	for (auto it=v3.cbegin(); it!=v3.cend(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "capacity: " << v4.capacity() << std::endl;
	for (auto it=v4.cbegin(); it!=v4.cend(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "capacity: " << v5.capacity() << std::endl;
	for (auto it=v5.cbegin(); it!=v5.cend(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "capacity: " << v6.capacity() << std::endl;
	for (auto it=v6.cbegin(); it!=v6.cend(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "capacity: " << v7.capacity() << std::endl;
	for (auto it=v7.cbegin(); it!=v7.cend(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void func2()
{
	std::vector<std::string> text;
	text.push_back("hello,world!");
	text.push_back("");
	for (auto it = text.begin(); it!=text.end() && !it->empty(); it++)
		for (auto &i : *it)
			i = toupper(i);
	for (auto i : text)
		std::cout << i << std::endl;
}

void func3()
{
	std::vector<int> v(10);
	for (int i = 0; i!=10; i++)
		v[i] = i;
	for (auto it = v.begin(); it!=v.end(); it++)
		*it = 2 * (*it);
	for (auto i : v)
		std::cout << i << " ";
}