#include <iostream>
void func1();
void func2();

int main() {
	//func1();
	func2();
	return 0;
}

void func1() {
	int curVal = 0, val = 0;
	if (std::cin >> curVal) {
		int cnt = 1;
		while (std::cin >> val) {
			if (val == curVal)
				++cnt;
			else {
				std::cout << curVal << " occurs "
					<< cnt << " times" << std::endl;
				curVal = val;
				cnt = 1;
			}
		}
		std::cout << curVal << " occurs "
			<< cnt << " times" << std::endl;
	}
}

void func2() {
	int val1, val2;
	std::cout << "Please input 2 numbers:" << std::endl;
	std::cin >> val1 >> val2;
	if (val1 > val2) {
		int tmp = val1;
		val1 = val2;
		val2 = tmp;
	}
	while (val1 <= val2) {
		std::cout << val1 << " ";
		val1++;
	}
	std::cout << std::endl;
}