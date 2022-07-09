#include <iostream>
#include <string>
#include <fstream>

void func11();
void func12();
void func3();

int main()
{
	//func11();
	//func12();
	func3();

	return 0;
}

void func11()
{
	std::string str = "ab2c3d7R4E6";
	std::string numbers = "012345679";
	std::string::size_type pos = 0;
	while ((pos = str.find_first_of(numbers, pos)) != std::string::npos) {
		std::cout << "The position is " << pos 
			<< ".\nThe element is " << str[pos] << std::endl;
		++pos;
	}
	
	std::cout << std::endl << "Letters as follow:\n\n";

	std::string letters;
	for (int i = 0; i<26; ++i) {
		letters += ('a' + i);
		letters += ('A' + i);
	}
	pos = 0;
	while ((pos = str.find_first_of(letters, pos)) != std::string::npos) {
		std::cout << "The position is " << pos 
			<< ".\nThe element is " << str[pos] << std::endl;
		++pos;
	}
}

void func12()
{
	std::string str = "ab2c3d7R4E6";
	std::string numbers = "012345679";
	std::string letters;
	for (int i = 0; i<26; ++i) {
		letters += ('a' + i);
		letters += ('A' + i);
	}
	std::string::size_type pos = 0;
	while ((pos = str.find_first_not_of(letters, pos)) != std::string::npos) {
		std::cout << "The position is " << pos 
			<< ".\nThe element is " << str[pos] << std::endl;
		++pos;
	}
	
	std::cout << std::endl << "Letters as follow:\n\n";

	pos = 0;
	while ((pos = str.find_first_not_of(numbers, pos)) != std::string::npos) {
		std::cout << "The position is " << pos 
			<< ".\nThe element is " << str[pos] << std::endl;
		++pos;
	}
}

void func3()
{
	std::ifstream ifs;
	ifs.open("words.txt");
	if (!ifs.is_open()) {
		std::cerr << "File open error!\n";
		return;
	}

	std::string ascender = "bdfhkl";
	std::string decender = "fgjpqy";

	std::string buf;
	while (ifs >> buf) {
		if ((buf.find_first_of(ascender) == std::string::npos) && (buf.find_first_of(decender) == std::string::npos))
			std::cout << buf << " ";
	}

	ifs.close();
}
