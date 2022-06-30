#include <iostream>

std::istream& func(std::istream &is);

int main() {
	std::istream &is = func(std::cin);
	std::cout << "after:\n";
	std::cout << is.rdstate() << std::endl;
	std::cout << is.badbit << " " << is.failbit << " " << is.eofbit << std::endl;
	std::cout << "good is: ";
	std::cout << is.good() << std::endl;

	return 0;
}

std::istream& func(std::istream &is)
{
	int val = 0;
	while (is >> val) {
		std::cout << val << " ";
	}
	std::cout << "before:\n";
	std::cout << is.rdstate() << std::endl;
	std::cout << is.badbit << " " << is.failbit << " " << is.eofbit << std::endl;
	std::cout << is.good() << std::endl;
	is.clear();
	return is;
}
