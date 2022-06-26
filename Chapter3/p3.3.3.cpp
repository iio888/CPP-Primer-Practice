#include <iostream>
#include <vector>
#include <string>
void func1();
void func2();
void func31();
void func32();

int main()
{
	//func1();
	//func2();
	//func31();
	func32();

	return 0;
}

void func1()
{
	std::vector<int> v1;
	std::vector<int> v2(10);
	std::vector<int> v3(10, 42);
	std::vector<int> v4 {10};
	std::vector<int> v5 {10, 42};
	std::vector<std::string> v6 {10};
	std::vector<std::string> v7 {10, "hi"};

	std::cout << "capacity: " << v1.capacity() << std::endl;
	for (auto &i : v1)
		std::cout << i << " ";
	std::cout << std::endl;

	std::cout << "capacity: " << v2.capacity() << std::endl;
	for (auto &i : v2)
		std::cout << i << " ";
	std::cout << std::endl;

	std::cout << "capacity: " << v3.capacity() << std::endl;
	for (auto &i : v3)
		std::cout << i << " ";
	std::cout << std::endl;

	std::cout << "capacity: " << v4.capacity() << std::endl;
	for (auto &i : v4)
		std::cout << i << " ";
	std::cout << std::endl;

	std::cout << "capacity: " << v5.capacity() << std::endl;
	for (auto &i : v5)
		std::cout << i << " ";
	std::cout << std::endl;

	std::cout << "capacity: " << v6.capacity() << std::endl;
	for (auto &i : v6)
		std::cout << i << " ";
	std::cout << std::endl;

	std::cout << "capacity: " << v7.capacity() << std::endl;
	for (auto &i : v7)
		std::cout << i << " ";
	std::cout << std::endl;
}

void func2()
{
	std::string word;
	std::vector<std::string> v;
	while (std::cin >> word) {
		v.push_back(word);
	}
	for (auto &i : v) {
		for (auto &j : i)
			j = toupper(j);
	}
	for (auto &i : v)
		std::cout << i << std::endl;
}

void func31()
{
	int num;
	std::vector<int> v;
	while (std::cin >> num)
		v.push_back(num);

	for (auto i = 0; i<v.size()-1; i++)
		std::cout << v[i] + v[i+1] << " ";
	std::cout << std::endl;
}

void func32()
{
	int num;
	std::vector<int> v;
	while (std::cin >> num)
		v.push_back(num);

	for (int i = 0, j = v.size()-2; i<j; i++, j--)
		std::cout << v[i] + v[i+1] << " " << v[j] + v[j+1] << " ";
	std::cout << std::endl;
}
