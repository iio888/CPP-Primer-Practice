#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include "Sales_data.h"

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
	std::vector<std::string> v = {"red", "yello", "organge", "green", "blue", "purple", "red", "purple", "green"};
	std::cout << std::count_if(v.begin(), v.end(), [](const std::string &s)
		{return s.size() > 6; }) << std::endl;
}

void func2()
{
	int i = 5;
	auto decrease = [&i]() -> bool {
		if (i != 0) {
			--i;
			return true;
		} else {
			return false;
		}
	};
	int cnt = 0;
	while (decrease()) {
		++cnt;
	}
	std::cout << i << std::endl;
}
