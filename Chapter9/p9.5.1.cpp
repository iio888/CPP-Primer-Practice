#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<char> vc;
	for (int i = 0; i!=10; ++i)
		vc.push_back('a' + i);
	for (auto i : vc)
		std::cout << i;
	std::cout << std::endl;
	std::string s(vc.begin(), vc.end());
	std::cout << s;
}