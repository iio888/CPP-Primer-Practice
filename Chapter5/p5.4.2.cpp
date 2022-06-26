#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v1;
	std::vector<int> v2;
	for (int i = 0; i<10; i++)
		v1.emplace_back(i);
	for (int i = 0; i<8; i++)
		v2.emplace_back(i);

	int size = std::min(v1.size(), v2.size());
	int i = 0;
	for ( ; i<size; i++) {
		if (v1[i] != v2[i])
			break;
	}
	if (i != size)
		std::cout << "false\n";
	else
		std::cout << "true\n";

	return 0;
}