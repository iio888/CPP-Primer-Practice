#include <iostream>
#include <vector>

bool func1(std::vector<int>::iterator beg, std::vector<int>::iterator end, int k);
std::vector<int>::iterator func2(std::vector<int>::iterator beg, std::vector<int>::iterator end, int k);

int main()
{
	std::vector<int> v {1, 2, 3, 4, 5, 10};
	std::cout << func1(v.begin(), v.end(), 5) << std::endl;

	auto it = func2(v.begin(), v.end(), 0);
	if (it != v.end())
		std::cout << *it << std::endl;
	else
		std::cout << "Not found.\n";

	return 0;
}

bool func1(std::vector<int>::iterator beg, std::vector<int>::iterator end, int k)
{
	bool flag = false;
	for (auto it=beg; it != end; it++) {
		if (*it == k) {
			flag = true;
			break;
		}
	}
	if (flag)
		return true;
	else
		return false;
}

std::vector<int>::iterator func2(std::vector<int>::iterator beg, std::vector<int>::iterator end, int k)
{
	bool flag = false;
	auto it = beg;
	for ( ; it != end; it++) {
		if (*it == k) {
			flag = true;
			break;
		}
	}
	return it;
}
