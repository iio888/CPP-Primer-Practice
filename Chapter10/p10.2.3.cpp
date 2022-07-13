#include <iostream>
#include <vector>
#include <algorithm>

void elimDups(std::vector<int> &v);

int main()
{
	std::vector<int> v = {1, 2, 4, 1, 2, 6, 5, 9, 0};
	elimDups(v);
	for (auto i : v)
		std::cout << i << " ";

	return 0;
}

void elimDups(std::vector<int> &v) {
	std::sort(v.begin(), v.end());
	//for (auto i : v)
	//	std::cout << i << " ";
	//std::cout << std::endl;
	v.erase(std::unique(v.begin(), v.end()), v.end());
	//std::cout << std::endl;
	//for (auto i : v)
	//	std::cout << i << " ";
	//std::cout << std::endl;
}
