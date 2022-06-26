#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
using std::string;

struct Sales_data {
	string ISBN;
	unsigned int num = 0;
	double price;
	double revenue = 0;
};

#endif
