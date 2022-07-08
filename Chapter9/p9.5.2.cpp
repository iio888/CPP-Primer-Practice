#include <iostream>
#include <string>

void func1(std::string &s, std::string oldVal, std::string newVal);
void func2(std::string &s, std::string oldVal, std::string newVal);
std::string func3(std::string &name, std::string prefix, std::string suffix);
std::string func4(std::string &name, std::string prefix, std::string suffix);

int main()
{
	std::string s = "Hi, tho, thru, we.";
	func1(s, "tho", "though");
	std::cout << s << std::endl;

	std::string name = "Mike";
	std::cout <<  func3(name, "Mr.", "III") << std::endl;
	std::string girl = "Kitty";
	std::cout <<  func4(girl, "Ms.", "Jr.") << std::endl;

	return 0;
}

void func1(std::string &s, std::string oldVal, std::string newVal)
{
	std::string::size_type oldLen = oldVal.size();
	for (auto iter = s.begin(); iter+oldLen != s.end(); ++iter) {
		if (s.substr(iter-s.begin(), oldLen) == oldVal) {
			iter = s.erase(iter, iter+oldLen);
			s.insert(iter-s.begin(), newVal);
		}
	}
}

void func2(std::string &s, std::string oldVal, std::string newVal)
{
	std::string::size_type oldLen = oldVal.size();
	for (int i = 0; i+oldLen != s.size(); ++i) {
		if (s.substr(i, oldLen) == oldVal) {
			s.replace(i, oldLen, newVal);
		}
	}
}

std::string func3(std::string &name, std::string prefix, std::string suffix)
{
	name.insert(name.begin(), prefix.begin(), prefix.end());
	name.append(suffix.begin(), suffix.end());
	return name;
}

std::string func4(std::string &name, std::string prefix, std::string suffix)
{
	name.insert(0, prefix);
	name.insert(name.size(), suffix);
	return name;
}
