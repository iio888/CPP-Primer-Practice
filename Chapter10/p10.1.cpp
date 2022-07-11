#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>

int main()
{
	std::vector<int> vi = {1, 1, 3, 4, 1, 5, 2};
	std::cout << std::count(vi.begin(), vi.end(), 1) << std::endl;
	
	std::list<std::string> lstr = {"wo", "wo", "str"};
	std::cout << std::count(lstr.begin(), lstr.end(), "wo") << std::endl;

	return 0;
}