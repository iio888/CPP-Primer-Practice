#include <iostream>
#include <vector>
#include <cassert>

void printVec(std::vector<int>::iterator beg, std::vector<int>::iterator end);

int main()
{
	std::vector<int> v = {1, 2, 3, 4, 5, 6};
	printVec(v.begin(), v.end());

	return 0;
}

void printVec(std::vector<int>::iterator beg, std::vector<int>::iterator end)
{
#ifndef NDEGUB
	std::cout << "size is " << end - beg << std::endl;
#endif

	std::cout << *beg << std::endl;
	++beg;
	if (beg == end)
		return;
	printVec(beg, end);
}
