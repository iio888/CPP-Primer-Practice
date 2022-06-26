#include <iostream>
#include <string>
#include <cstring>

void func1();
void func2();

int main()
{
	//func1();
	func2();

	return 0;
}

void func1()
{
	std::string s1 = "hello";
	std::string s2 = "world!";

	if (s1 > s2)
		std::cout << "s1" << std::endl;
	else
		std::cout << "s2" << std::endl;

	const char s3[] = "hello";
	const char s4[] = "world";

	if (strcmp(s3, s4) > 0)
		std::cout << "s3" << std::endl;
	else
		std::cout << "s4" << std::endl;
}

void func2()
{
	const char s1[] = "hello";
	const char s2[] = "world";
	char sum[1024] = "";
	strcpy_s(sum, s1);
	strcat_s(sum, s2);
	for (auto i : sum)
		std::cout << i;
	std::cout << std::endl;
}