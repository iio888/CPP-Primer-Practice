#include <iostream>
#include "Sales_item.h"

void func1();
void func2();
void func3();

int main() {
	//func1();
	//func2();
	func3();
	return 0;
}

void func1() {
	Sales_item items[5];
	for (int i = 0; i<3; i++) {
		std::cin >> items[i];
	}
	std::cout << "output:" << std::endl;
	for (int i = 0; i<3; i++) {
		std::cout << items[i] << std::endl;
	}
}

void func2() {
	Sales_item it1, it2;
	std::cin >> it1 >> it2;
	std::cout << it1 + it2 << std::endl;
}

void func3() {
	Sales_item its[3];
	for (int i = 0; i<3; i++) {
		std::cin >> its[i];
	}
	Sales_item sum("id1");
	for (int i = 0; i<3; i++) {
		sum = sum + its[i];
	}
	std::cout << sum << std::endl;
	std::cout << its[0] + its[1] + its[2] << std::endl;
}