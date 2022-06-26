#include <iostream>
#include <string>

std::string make_plural(size_t ctr, const std::string &word, const std::string &ending = "s");

int main()
{
	std::cout << make_plural(1, "success") << " " << make_plural(2, "success") << std::endl;
	std::cout << make_plural(1, "failure") << " " << make_plural(2, "failure") << std::endl;
}

std::string make_plural(size_t ctr, const std::string &word, const std::string &ending)
{
	return (ctr > 1) ? word + ending : word;
}