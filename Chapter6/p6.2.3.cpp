#include <iostream>
#include <string>

bool isUpperCase(const std::string &s);
void toLowCase(std::string &s);

int main()
{
	std::string str = "HelLo";
	isUpperCase(str);
	toLowCase(str);
	std::cout << str;

	return 0;
}

bool isUpperCase(const std::string &s)
{
	bool flag = false;
	for (auto i : s) {
		if (i>='A' && i<='Z') {
			flag = true;
			break;
		}
	}
	if (flag)
		std::cout << "Yes\n";
	else
		std::cout << "No\n";

	return flag;
}

void toLowCase(std::string &s)
{
	for (auto &i : s) {
		if (i>='A' && i<='Z')
			i = i - 'A' + 'a';
	}
}