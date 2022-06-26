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
	int arr[] = {1, 2, 3};
	std::vector<int> v(std::begin(arr), std::end(arr));
	for (auto i : v)
		std::cout << i << " ";
}

void func2()
{
	std::vector<int> v = {1, 2, 3, 4, 5};
	int a[100] = {0};
	for (int i = 0; i<v.size(); i++)
		a[i] = v[i];
	for (int i = 0; i<v.size(); i++)
		std::cout << a[i] << " ";
}