#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

std::istream &p812(std::istream &is);
void func1();
void func2();

int main()
{
	func2();

	return 0;
}

std::istream& p812(std::istream &is)
{
	std::string val;
	while (is >> val) {
		std::cout << val << " ";
	}
	is.clear();
	return is;
}

void func1()
{
	std::istringstream iss("hello world");
	p812(iss);
}

void func2()
{
	std::vector<std::string> vec;
	std::string filename = "stringstream";
	std::ifstream ifs(filename + ".txt");
	if (!ifs.is_open()) {
		std::cerr << "file open error!\n";
		return;
	}
	
	std::string line;
	while (std::getline(ifs, line)) {
		vec.emplace_back(line);
	}
	for (auto i : vec) {
		std::istringstream iss(i);
		std::string word;
		while (iss >> word)
			std::cout << word << "\n";
		std::cout << std::endl;
	}
}