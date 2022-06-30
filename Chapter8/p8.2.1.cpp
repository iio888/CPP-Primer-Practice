#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Sales_data.h"

void func1();
void func2();
void func3();

int main(int argc, char* argv[])
{
	//func1();
	//func2();

	if (argc != 2) {
		std::cerr << "please input filename\n";
		return -1;
	}

	std::ifstream ifs(argv[1]);
	if (!ifs.is_open()) {
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
				print(std::cout, total) << std::endl;
				total = trans;
			}
		}
		print(std::cout, total) << std::endl;
	} else {
		std::cerr << "No data?!\n";
	}

	ifs.close();

	return 0;
}

void func1()
{
	std::string filename = "ifstream.txt";
	std::ifstream ifs(filename);
	std::vector<std::string> vec;
	std::string buf;
	if (ifs.is_open()) {
		while (std::getline(ifs, buf)) {
			vec.emplace_back(buf);
			std::cout << buf << std::endl;
		}
	} else {
		std::cerr << "File open error!\n";
	}
	ifs.close();
}

void func2()
{
	std::string filename = "ifstream.txt";
	std::ifstream ifs(filename);
	std::vector<std::string> vec;
	std::string buf;
	if (ifs.is_open()) {
		while (ifs >> buf) {
			vec.emplace_back(buf);
			std::cout << buf << std::endl;
		}
	} else {
		std::cerr << "File open error!\n";
	}
	ifs.close();
}
