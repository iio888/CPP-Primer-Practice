#include <iostream>
#include <vector>

int main()
{
	do {
		std::string s1;
		std::string s2;
		std::cout << "Please input 2 strings" << std::endl;
		std::cin >> s1 >> s2;
		if (s1.size() > s2.size())
			std::cout << s2 << std::endl;
		else
			std::cout << s1 << std::endl << std::endl;
	} while (std::cin);

	return 0;
}