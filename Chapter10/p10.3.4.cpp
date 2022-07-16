#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <functional>
using namespace std::placeholders;

void func1();
bool isLessThan(const std::string &s, int sz);
void func2();
bool check_size(const std::string &s, std::string::size_type sz);
void func3();
void biggies(std::vector<std::string> &words, int sz);

int main()
{
	//func2();
	//func2();
	func3();

	return 0;
}

void func1()
{
	std::vector<std::string> v = {"red", "yello", "organge", "green", "blue", "purple", "red", "purple", "green", "abcdefg"};
	std::cout << v.size() << std::endl;
	std::cout << std::count_if(v.begin(), v.end(), bind(isLessThan, _1, 6)) << std::endl;
}
bool isLessThan(const std::string &s, int sz)
{
	return s.size() <= sz;
}

void func2()
{
	std::vector<int> v = {1, 10, 8, 2, 5, 3, 6, 1, 2};
	const std::string s = "hello";
	auto aim = std::find_if(v.begin(), v.end(), std::bind(check_size, s, _1));
	std::cout << *aim << std::endl;
}
bool check_size(const std::string &s, std::string::size_type sz)
{
	return sz > s.size();
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
void elimDups(std::vector<std::string> &v) {
	std::sort(v.begin(), v.end());
	v.erase(std::unique(v.begin(), v.end()), v.end());
}
void biggies(std::vector<std::string> &words, int sz)
{
	elimDups(words);
	std::stable_sort(words.begin(), words.end(), [](const std::string &s1, const std::string &s2)
		{return s1.size() < s2.size(); });
	auto aim = std::partition(words.begin(), words.end(), std::bind(check_size, _1, sz));
	std::for_each(words.begin(), aim, [](const std::string &s) {std::cout << s << " "; });
}
