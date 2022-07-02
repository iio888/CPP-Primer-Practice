#include <iostream>
#include <list>
#include <vector>
#include <string>

int main()
{
	char *a = const_cast<char*>("this");
	char *b = const_cast<char*>("my");
	char *c = const_cast<char*>("list");

	std::list<char *> l = {a, b, c};
	std::vector<std::string> v = {"hello", "worl", "d!"};

	for (const auto i : v)
		std::cout << i << std::endl;
	v.assign(l.begin(), l.end());
	for (const auto i : v)
		std::cout << i << std::endl;

	return 0;
}