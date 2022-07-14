#include <iostream>
#include <vector>
#include <algorithm>
#include "Sales_data.h"

void func1();
void elimDups(std::vector<std::string> &v);
bool isShorter(const std::string &s1, const std::string &s2);

void func2();
bool compareIsbn(const Sales_data &d1, const Sales_data &d2);

void func3();
bool isGreaterFive(std::string &str);

int main()
{
	//func1();
	//func2();
	func3();

	return 0;
}

void func1()
{
	std::vector<std::string> v = {"red", "yello", "organge", "green", "blue", "purple"};
	elimDups(v);
	std::cout << "before: \n";
	for (auto &i : v)
		std::cout << i << " ";
	std::stable_sort(v.begin(), v.end(), isShorter);
	std::cout << "\nafter: \n";
	for (auto &i : v)
		std::cout << i << " ";
}
bool isShorter(const std:: string &s1, const std::string &s2) {
	return s1.size() < s2.size();
}
void elimDups(std::vector<std::string> &v) {
	std::sort(v.begin(), v.end());
	v.erase(std::unique(v.begin(), v.end()), v.end());
}

void func2()
{
	std::vector<Sales_data> vData;
	Sales_data d1("124");
	Sales_data d2("122");
	Sales_data d3("125");
	Sales_data d4("121");
	Sales_data d5("126");
	vData.push_back(d1);
	vData.push_back(d2);
	vData.push_back(d3);
	vData.push_back(d4);
	vData.push_back(d5);

	std::cout << "before: \n";
	for (auto &i : vData)
		std::cout << i.isbn() << " ";

	std::sort(vData.begin(), vData.end(), compareIsbn);
	std::cout << "\nafter: \n";
	for (auto &i : vData)
		std::cout << i.isbn() << " ";
}
bool compareIsbn(const Sales_data &d1, const Sales_data &d2)
{
	return d1.isbn() < d2.isbn();
}

void func3()
{
	std::vector<std::string> v = {"red", "yello", "organge", "green", "blue", "purple"};
	auto ed = std::partition(v.begin(), v.end(), isGreaterFive);
	for (auto i = v.begin(); i!=ed; ++i)
		std::cout << *i << " ";
	std::cout << std::endl;
}
bool isGreaterFive(std::string &str)
{
	return str.size() >= 5;
}
