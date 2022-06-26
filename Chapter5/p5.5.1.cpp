#include <iostream>
#include <string>

int main()
{
	std::string word;
	std::string pre;
	bool flag = false;
	while (std::cin >> word) {
		if (pre == word) {
			flag = true;
			break;
		}
		pre = word;
	}
	if (flag)
		std::cout << word << std::endl;
	else
		std::cout << "No continual word.\n";

	return 0;
}