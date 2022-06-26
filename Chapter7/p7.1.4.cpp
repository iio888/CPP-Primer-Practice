#include <iostream>
#include "Sales_data.h"

void func1();
void func2();

int main()
{
	//func1();
	func2();

	return 0;
}

void func1()
{
	Sales_data s1;
	Sales_data s2(std::cin);
	Sales_data s3("abc");
	Sales_data s4("bb", 2, 30);

	print(std::cout, s1) << std::endl;
	print(std::cout, s2) << std::endl;
	print(std::cout, s3) << std::endl;
	print(std::cout, s4) << std::endl;
}

void func2()
{
	Sales_data total(std::cin);
	if (!total.isbn().empty()) {
		std::istream &is = std::cin;
		while (is) {
			Sales_data trans(is);
			if (total.isbn() == trans.isbn()) {
				total = add(total, trans);
			} else {
				print(std::cout, total) << std::endl;
				total = trans;
			}
		}
		if (!total.isbn().empty())
			print(std::cout, total) << std::endl;
	} else {
		std::cerr << "No Data?!" << std::endl;
	}
}

std::istream &read(std::istream &in, Sales_data &item)
{
	in >> item.ISBN >> item.num >> item.price;
	item.revenue = item.num * item.price;
	return in;
}
std::ostream &print(std::ostream &out, const Sales_data &item)
{
	out << item.isbn() << " " << item.num << " " << item.revenue;
	return out;
}
Sales_data add(const Sales_data &a, const Sales_data &b)
{
	Sales_data sum = a;
	sum.combine(b);
	return sum;
}
