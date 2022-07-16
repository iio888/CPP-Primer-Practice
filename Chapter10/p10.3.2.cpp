#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include "Sales_data.h"

void func1();
void func2();
void func3();
void func4();
void func5();
void func6();
void elimDups(std::vector<std::string> &v);
bool isShorter(const std::string &s1, const std::string &s2);
void biggies(std::vector<std::string> &words, int sz);
void elsebiggies(std::vector<std::string> &words, int sz);
void stableBiggies(std::vector<std::string> &words, int sz);

int main()
{
	//func1();
	//func2();
	//func3();
	//func4();
	//func5();
	func6();

	return 0;
}

void func1()
{
	auto sum = [](int a, int b) {return a + b; };
	std::cout << sum(1, 2) << std::endl;
}

void func2()
{
	int a = 2;
	auto sum = [a](int b) {return a + b; };
	std::cout << sum(2) << std::endl;
}
void func3()
{
	std::vector<std::string> v = {"red", "yello", "organge", "green", "blue", "purple", "red", "purple", "green"};
	std::cout << "before: \n";
	for (auto &i : v)
		std::cout << i << " ";
	biggies(v, 4);
	std::cout << "\nafter: \n";
	for (auto &i : v)
		std::cout << i << " ";
}
void biggies(std::vector<std::string> &words, int sz)
{
	elimDups(words);
	std::stable_sort(words.begin(), words.end(), [](const std::string &s1, const std::string &s2)
		{return s1.size() < s2.size(); });
	auto aim = std::find_if(words.begin(), words.end(), [sz](const std::string &s)
		{return s.size() >= sz; });
	std::for_each(aim, words.end(), [](const std::string &s) {std::cout << s << " "; });
}
bool isShorter(const std:: string &s1, const std::string &s2) {
	return s1.size() < s2.size();
}
void elimDups(std::vector<std::string> &v) {
	std::sort(v.begin(), v.end());
	v.erase(std::unique(v.begin(), v.end()), v.end());
}
void func4()
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

	std::sort(vData.begin(), vData.end(), [](const Sales_data &a, const Sales_data &b)
		{return a.isbn() < b.isbn(); });
	std::cout << "\nafter: \n";
	for (auto &i : vData) std::cout << i.isbn() << " "; 
}

void func5()
{
	std::vector<std::string> v = {"red", "yello", "organge", "green", "blue", "purple", "red", "purple", "green"};
	std::cout << "before: \n";
	for (auto &i : v)
		std::cout << i << " ";
	biggies(v, 4);
	std::cout << "\nafter: \n";
	for (auto &i : v)
		std::cout << i << " ";
}

void elsebiggies(std::vector<std::string> &words, int sz)
{
	elimDups(words);
	std::stable_sort(words.begin(), words.end(), [](const std::string &s1, const std::string &s2)
		{return s1.size() < s2.size(); });
	auto aim = std::partition(words.begin(), words.end(), [sz](const std::string &s)
		{return s.size() > sz; });
	std::for_each(words.end(), aim, [](const std::string &s) {std::cout << s << " "; });
}

void func6()
{
	std::vector<std::string> v = {"red", "yello", "organge", "green", "blue", "purple", "red", "purple", "green"};
	std::cout << "before: \n";
	for (auto &i : v)
		std::cout << i << " ";
	biggies(v, 4);
	std::cout << "\nafter: \n";
	for (auto &i : v)
		std::cout << i << " ";
}

void stableBiggies(std::vector<std::string> &words, int sz)
{
	elimDups(words);
	std::stable_sort(words.begin(), words.end(), [](const std::string &s1, const std::string &s2)
		{return s1.size() < s2.size(); });
	auto aim = std::stable_partition(words.begin(), words.end(), [sz](const std::string &s)
		{return s.size() > sz; });
	std::for_each(words.end(), aim, [](const std::string &s) {std::cout << s << " "; });
}