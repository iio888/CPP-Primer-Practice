#include <iostream>
#include <string>
#include <vector>
#include <map>

class date {
private:
	std::map<std::string, int> monthMap = {
		{"Jan", 0}, {"Janurary", 0}, {"Feb", 0}, {"February", 0}, {"Mar", 0}, {"March", 0}, 
		{"Apr", 0}, {"April", 0}, {"May", 0}, {"May", 0}, {"Jun", 0}, {"June", 0}, 
		{"Jul", 0}, {"July", 0}, {"Aug", 0}, {"August", 0}, {"Sep", 0}, {"September", 0}, 
		{"Oct", 0}, {"October", 0}, {"Nov", 0}, {"November", 0}, {"Dec", 0}, {"December", 0}, 
	};
public:
	unsigned year = 1;
	unsigned month = 1;
	unsigned day = 1;
	date() { }
	date(std::string d) {
		std::string letters;
		std::string numbers = "012345679";
		for (int i = 0; i<26; ++i) {
			letters += ('a' + i);
			letters += ('A' + i);
		}
		std::string::size_type pos = 0;
		if (d.find_first_of(letters) == 0) {
			pos = d.find_last_of(letters);
			
			for (int i = 2; i<=24; ++i) {
					
			}
		} else {
			pos = d.find_first_not_of(numbers) - 1;
			day = std::stoi(d.substr(pos+2, d.find_first_not_of(numbers, pos+2)));
		}
		month = std::stoi(d.substr(0, pos));
		year = std::stoi(d.substr(d.find_last_not_of(numbers)+1, d.size()-1));
	}
	std::ostream& print() {
		std::cout << this->year << " " << this->month << " " << this->day;
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

	return 0;
}