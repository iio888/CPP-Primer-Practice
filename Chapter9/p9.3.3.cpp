#include <iostream>
#include <vector>
#include <list>

int main()
{
	int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
	std::vector<int> v(std::begin(ia), std::end(ia));
	std::list<int> l(std::begin(ia), std::end(ia));

	for (auto i : v)
		std::cout << i << " ";
	std::cout << std::endl;
	for (auto i : l)
		std::cout << i << " ";
	std::cout << std::endl;
	std::cout << std::endl;

	for (auto it = l.begin(); it!=l.end(); ) {
		if (*it%2 == 1)
			it = l.erase(it);
		else
			it++;
	}
	for (auto i : l)
		std::cout << i << " ";
	std::cout << std::endl;

	for (auto it = v.begin(); it!=v.end(); ) {
		if (*it%2 == 0) 
			it = v.erase(it);
		else 
			it++;
	}
	for (auto i : v)
		std::cout << i << " ";
	std::cout << std::endl;

	return 0;
}