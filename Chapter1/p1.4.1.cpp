#include <iostream>
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
	int val = 50;
	const int finVal = 100;
	int sum = 0;
	while (val <= finVal) {
		sum += val;
		val++;
	}
	std::cout << "Sum is " << sum << std::endl;
}

void func2() {
	int val = 10;
	while (val >= 0) {
		std::cout << val << " ";
		val--;
	}
	std::cout << std::endl;
}

void func3() {
	int val1, val2;
	std::cout << "Please input 2 numbers:" << std::endl;
	std::cin >> val1 >> val2;
	/*if (val1 > val2) {
		int tmp = val1;
		val1 = val2;
		val2 = tmp;
	}*/
	while (val1 <= val2) {
		std::cout << val1 << " ";
		val1++;
	}
	std::cout << std::endl;
}