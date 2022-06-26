#include <iostream>
#include <vector>

int main()
{
	std::vector<int> ivec(10);
	std::vector<int>::size_type cnt = ivec.size();
	for (std::vector<int>::size_type ix = 0; ix!=ivec.size(); ++ix, --cnt)
		ivec[ix] = cnt;
	for (auto i : ivec)
		std::cout << i << " ";

	return 0;
}