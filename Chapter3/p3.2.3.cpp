#include <iostream>
#include <string>
void func1();
void func2();
void func3();
void func4();

int main()
{
	std::cout << "Go:" <<std::endl;
	//func1();
	//func2();
	//func3();
	func4();

	return 0;
}

void func1()
{
	std::string str;
	std::cin >> str;
	for (auto &i : str)
		i = 'X';
	std::cout << str << std::endl;
}

void func2()
{
	std::string str;
	std::cin >> str;
	for (char &i : str)
		i = 'X';
	std::cout << str << std::endl;
}

void func3()
{
	std::string str;
	std::cin >> str;
	int i = 0;
	while (i < str.size()) {
		str[i] = 'X';
		i++;
	}
	std::cout << str << std::endl;

	std::cin.clear();

	for (i = 0; i<str.size(); i++) {
		str[i] = 'X';
	}
	std::cout << str << std::endl;
}

void func4() {
	std::string str;
	std::cin >> str;
	for (auto i : str) {
		if (!ispunct(i))
			std::cout << i;
	}
}
