#include <iostream>
void func1();
void func2();
void func3();

int main() {
	func1();
	func2();
	func3();

	return 0;
}

void func1() {
	int val;
	const int finVal = 100;
	int sum = 0;
	for (val = 50; val<=finVal; val++)
		sum += val;
	std::cout << "Sum is " << sum << std::endl;
}

void func2() {
	int val = 10;
	for (val = 10; val>=0; val--) {
		std::cout << val << " ";
	}
	std::cout << std::endl;
}

void func3() {
	int val1, val2;
	std::cout << "Please input 2 numbers:" << std::endl;
	std::cin >> val1 >> val2;
	if (val1 > val2) {
		int tmp = val1;
		val1 = val2;
		val2 = tmp;
	}
	for (; val1<=val2; val1++) {
		std::cout << val1 << " ";
	}
	std::cout << std::endl;
}