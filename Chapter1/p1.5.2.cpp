#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item curItem, valItem;
	std::cin >> curItem;
	valItem = curItem;
	int cnt = 1;
	while (std::cin >> valItem) {
		if (valItem.isbn() == curItem.isbn()) {
			cnt++;
		} else {
			std::cout << "ISBN: " << curItem.isbn() << "  has " << cnt << std::endl;
			curItem = valItem;
			cnt = 1;
		}
	}
	std::cout << "ISBN: " << curItem.isbn() << "  has " << cnt << std::endl;

	return 0;
}

