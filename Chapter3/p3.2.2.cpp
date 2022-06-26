#include <iostream>
#include <string>

void func1();
void func2();
void func3();

int main()
{
	//func1();
	//func2();
	func3();

	return 0;
}

void func1()
{
	std::string str;
	getline(std::cin, str);
	std::cout << str << std::endl;

	std::string word;
	while (std::cin >> word) {
		std::cout << word << std::endl;
	}
}

void func2()
{
	std::string str1, str2;
	std::cin >> str1 >> str2;
	if (str1 == str2) {
		std::cout << "Equal!" << std::endl;
	} else {
		if (str1 > str2)
			std::cout << str1 << std::endl;
		else
			std::cout << str2 << std::endl;
	}

	if (str1.size() == str2.size()) {
		std::cout << "Equal Size!" << std::endl;
	} else {
		if (str1.size() > str2.size())
			std::cout << str1 << std::endl;
		else
			std::cout << str2 << std::endl;
	}
}

void func3()
{
	std::string str, sum;
	while (std::cin >> str) {
		sum += str;
	}
	std::cout << sum << std::endl;
	
	std::cin.clear();

	std::string newSum;
	while (std::cin >> str) {
		newSum += str + ' ';
	}
	std::cout << newSum << std::endl;
}