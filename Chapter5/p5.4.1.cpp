#include<iostream>
#include <string>

int main()
{
	std::string maxWord;
	std::string word;
	unsigned cnt = 1;
	unsigned max = 1;
	std::string pre;
	while (std::cin >> word) {
		if (word == pre) {
			++cnt;
			if (cnt > max) {
				max = cnt;
				maxWord = word;
			}
		} else {
			cnt = 1;
		}
		pre = word;
	}
	std::cout << maxWord << " appears " << max << " times." << std::endl;
}