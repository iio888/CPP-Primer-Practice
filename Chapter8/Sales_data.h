#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>
using std::string;

class Sales_data {
private:
	std::string ISBN;
	unsigned int num = 0;
	double price = 0.0;
	double revenue = 0.0;

	friend Sales_data add(const Sales_data &a, const Sales_data &b);
	friend std::istream &read(std::istream &in, Sales_data &item);
	friend std::ostream &print(std::ostream &out, const Sales_data &item);
public:
	Sales_data(): Sales_data("", 0, 0.0) {
		std::cout << "default\n";
	}
	Sales_data(std::istream &in) : Sales_data() {
		read(in, *this);
		std::cout << "stream\n";
	}
	Sales_data(std::string s) : Sales_data(s, 0, 0.0) { 
		std::cout << "ISBN\n";
	}
	Sales_data(std::string s, unsigned n, double p):
		ISBN(s), num(n), price(p), revenue(n *p) { 
		std::cout << "three\n";
	}

	std::string isbn() const {
		return ISBN;
	}

	Sales_data &combine (const Sales_data &add) {
		price += add.price;
		num += add.num;
		revenue += add.revenue;
		return *this;
	}

};

Sales_data add(const Sales_data &a, const Sales_data &b);
std::istream &read(std::istream &in, Sales_data &item);
std::ostream &print(std::ostream &out, const Sales_data &item);


#endif
