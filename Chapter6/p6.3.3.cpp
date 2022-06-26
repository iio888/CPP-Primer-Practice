#include <iostream>
#include <string>

std::string (&func1())[10];

using strArr = std::string[10];
strArr& func2_1();
auto func2_2()->std::string(&)[10];
std::string s[] = {"hello", "world"};
decltype(s) &func2_3();

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};
decltype(odd) &arrPtr(int i);

int main()
{

	return 0;
}

decltype(odd) &arrPtr(int i)
{
	return (i%2) ? odd : even;
}
