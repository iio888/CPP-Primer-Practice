#include <iostream>
#include "Sales_data.h"
#include "Person.h"

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
	Sales_data total;
	if (read(std::cin, total)) {
		Sales_data trans;
		while (read(std::cin, trans)) {
			if (total.isbn() == trans.isbn())
				total = add(total, trans);
			else {
				print(std::cout, total) << std::endl;
				total = trans;
			}
		}
		print(std::cout, total) << std::endl;	
	} else {
		std::cerr << "No Data?!" << std::endl;
	}
}

void func2()
{
	Person p;
	while (read(std::cin, p)) {
		print(std::cout, p) << std::endl;
	}
}

std::istream &read(std::istream &in, Person &p)
{
	in >> p.name >> p.address;
	return in;
}
std::ostream &print(std::ostream &out, const Person &p)
{
	out << p.getName() << " " << p.getAddress();
	return out;
}

Sales_data add(const Sales_data &a, const Sales_data &b)
{
	Sales_data sum = a;
	sum.combine(b);
	return sum;
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
