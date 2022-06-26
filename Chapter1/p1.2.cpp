#include <iostream>

int main() {
	std::cout << "Hello World!" << std::endl;

	int v1, v2;
	std::cout << "Please input 2 numbers." << std::endl;
	std::cin >> v1 >> v2;
	std::cout << "The result is ";
	std::cout << v1*v2 << std::endl;

	return 0;
}