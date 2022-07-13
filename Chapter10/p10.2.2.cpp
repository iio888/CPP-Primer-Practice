#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v(10, 1);
	std::cout << "before: \n";
	for (auto i : v)
		std::cout << i << " ";
	std::fill_n(v.begin(), 10, 0);
	std::cout << "\nafter: \n";
	for (auto i : v)
		std::cout << i << " ";

	std::cout << "\nReserve:\n";
	std::vector<int> vec;
	vec.reserve(10);
	vec.reserve(10);
	std::cout << vec.capacity() << " " << vec.size() << std::endl;

	return 0;
}