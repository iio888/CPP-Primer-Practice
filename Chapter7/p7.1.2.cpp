#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
	Sales_data total;
	if (std::cin >> total.ISBN >> total.num >> total.price ) {
		total.revenue = total.num * total.price;
		Sales_data trans;
		while (std::cin >> trans.ISBN >> trans.num >> trans.price) {
			trans.revenue = trans.num * trans.price;
			if (total.isbn() == trans.isbn()) {
				total.combine(trans);
			} else {
				std::cout << total.isbn() << " " << total.num  << " " << total.revenue << std::endl;
				total = trans;
			}
		}
		std::cout << total.isbn() << " " << total.num  << " " << total.revenue << std::endl;
	} else {
		std::cerr << "No Data?!" <<std::endl;
	}

	return 0;
}