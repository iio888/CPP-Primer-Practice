#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Sales_data.h"


int main(int argc, char* argv[])
{
	if (argc != 3) {
		std::cerr << "please input filename\n";
		return -1;
	}

	std::ifstream ifs(argv[1]);
	if (!ifs.is_open()) {
		std::cerr << "File open error!\n";
		return -1;
	} 
	//p8.7
	//std::ofstream ofs(argv[2], std::ofstream::out);
	//p8.8
	std::ofstream ofs(argv[2], std::ofstream::app);
	if (!ofs.is_open()) {
		std::cerr << "File open error!\n";
		return -1;
	} 

	Sales_data total;
	if (read(ifs, total)) {
		Sales_data trans;
		while (read(ifs, trans)) {
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(ofs, total) << std::endl;
				total = trans;
			}
		}
		print(ofs, total) << std::endl;
	} else {
		std::cerr << "No data?!\n";
	}

	ifs.close();
	ofs.close();

	return 0;
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