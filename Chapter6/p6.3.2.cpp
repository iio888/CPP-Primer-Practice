#include <iostream>
#include <string>
#include <vector>

bool str_subrange(const std::string &str1, const std::string &str2);
void printVec(std::vector<int>::iterator beg, std::vector<int>::iterator end);

int main()
{
	//if (str_subrange("hello", "world!"))
	//	std::cout << "true\n";
	//else
	//	std::cout << "false\n";

	std::vector<int> v = {1, 2, 3, 4, 5, 6};
	printVec(v.begin(), v.end());

	return 0;
}

bool str_subrange(const std::string &str1, const std::string &str2)
{
	if (str1.size() == str2.size())
		return str1 == str2;
	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
	for (decltype(size) i = 0; i!=size; i++) {
		if (str1[i] != str2[i])
			return false;
	}
	return false;
}

void printVec(std::vector<int>::iterator beg, std::vector<int>::iterator end)
{
	std::cout << *beg << " ";
	++beg;
	if (beg == end)
		return;
	printVec(beg, end);
}
