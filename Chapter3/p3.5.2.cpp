#include <iostream>
#include <vector>
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
	int arr[10] = {};
	for (int i = 0; i<10; i++)
		arr[i] = i;
	for (auto i : arr)
		std::cout <<  i << " ";
	std::cout << std::endl;

	int arr2[10] = {};
	for (int i = 0; i<10; i++)
		arr2[i] = arr[i];
	for (auto i : arr2)
		std::cout << i << " ";
}

void func2()
{
	std::vector<int> v1(10);
	for (int i = 0; i<10; i++)
		v1[i] = i;
	std::vector<int> v2 = v1;
	for (auto i : v2)
		std::cout << i << " ";
}