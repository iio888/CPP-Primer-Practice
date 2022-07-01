#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

struct PersonInfo {
	std::string name;
	std::vector<std::string> phones;
};

bool valid(std::string str);
std::string format(std::string str);

int main()
{
	std::string line, word;
	std::vector<PersonInfo> people;
	std::ifstream ifs("stringstream.txt");
	if (!ifs.is_open()) {
		std::cerr << "file open error!\n";
		return -1;
	}
	while (std::getline(ifs, line)) {
		PersonInfo info;
		std::istringstream record(line);
		record >> info.name;
		while (record >> word)
			info.phones.emplace_back(word);
		people.emplace_back(info);
	}

	for (const auto &entry : people) {
		std::ostringstream formatted, badNums;
		for (const auto &nums : entry.phones) {
			if (!valid(nums))
				badNums << " " << nums;
			else
				formatted << " " << format(nums);
		}
		if (badNums.str().empty())
			std::cout << entry.name << " " << formatted.str() << std::endl;
		else
			std::cerr << "input error: " << entry.name << " invalid number(s) " << badNums.str() << std::endl;
	}
}
