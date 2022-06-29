#include <iostream>
#include <string>

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

class employee {
private:
	std::string name;
	std::string workID;
	unsigned age = 18;
	std::string department;
	std::string duty;

public:
	employee(): employee("", "", 18, "", "") { }
	employee(std::string n, std::string ID, unsigned a = 18) :
		employee(n, ID, a, "", "") { }
	employee(std::string n, std::string ID, unsigned a,
		std::string depart, std::string d) :
		name(n), workID(ID), age(a), department(depart), duty(d) { }
};

int main()
{
	Sales_data three("isbn", 10, 10);
	Sales_data de;
	Sales_data isb("isb");
	Sales_data is(std::cin);

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
