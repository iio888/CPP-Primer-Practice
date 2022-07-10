#include <iostream>
#include <string>
#include <vector>
#include <map>

class date {
private:
	std::map<std::string, int> monthMap = {
		{"Jan", 1}, {"Janurary", 1}, {"Feb", 2}, {"February", 2}, {"Mar", 3}, {"March", 3}, 
		{"Apr", 4}, {"April", 4}, {"May", 5}, {"May", 5}, {"Jun", 6}, {"June", 6}, 
		{"Jul", 7}, {"July", 7}, {"Aug", 8}, {"August", 8}, {"Sep", 9}, {"September", 9}, 
		{"Oct", 10}, {"October", 10}, {"Nov", 11}, {"November", 11}, {"Dec", 12}, {"December", 12}, 
	};
public:
	unsigned year = 1;
	unsigned month = 1;
	unsigned day = 1;
	date() { }
	date(std::string d) {
		std::string letters;
		std::string numbers = "0123456789";
		for (int i = 0; i<26; ++i) {
			letters += ('a' + i);
			letters += ('A' + i);
		}
		std::string::size_type pos = 0;
		if (d.find_first_of(letters) == 0) {
			//the last position of MONTH
			pos = d.find_last_of(letters);
			month = monthMap[d.substr(0, pos+1)];
			day = std::stoi(d.substr(pos+2, d.find_first_not_of(numbers, pos+2)+1));
		} else {
			pos = d.find_first_not_of(numbers);
			day = std::stoi(d.substr(0, pos));
			month = std::stoi(d.substr(pos+1, d.find_first_not_of(numbers, pos+1)-pos-1));
		}
		year = std::stoi(d.substr(d.find_last_not_of(numbers)+1, 4));
	}
	std::ostream& print() {
		std::cout << this->year << "Äê " << this->month << "ÔÂ " << this->day << "ÈÕ\n";
		return std::cout;
	}
};

int main()
{
	std::vector<std::string> vstrInt = {"12", "34", "56"};
	std::vector<std::string> vstrDouble = {"1.2", "3.4", "5.6"};
	double sumDouble = 0;
	int sumInt = 0;
	for (auto i : vstrInt)
		sumInt += stoi(i);
	for (auto i : vstrDouble)
		sumDouble += stod(i);
	std::cout << sumInt << " " << sumDouble << std::endl << std::endl << std::endl;

	date day1("Jan 10 1988");
	day1.print() << std::endl;
	date day2("12/10/2022");
	day2.print() << std::endl;
	date day3("December 14,1999");
	day3.print() << std::endl;

	return 0;
}