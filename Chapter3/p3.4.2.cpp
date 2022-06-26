#include <iostream>
#include <vector>
void func1();
void func2();

int main()
{
	//func1();
	func2();
}

void func1()
{
	std::vector<int> v;
	int num;
	while (std::cin >> num)
		v.push_back(num);
	auto i = v.begin(), j = v.end() - 2;
	for ( ; i!=j; i++, j--)
		std::cout << *i + *(i+1) << " " << *j + *(j+1) << " ";
	std::cout << std::endl;
}

void func2()
{
	unsigned score = 0;
	std::vector<int> statistics(11, 0);
	//auto it = statistics.begin();
	while (std::cin >> score) {
		if (score <= 100)
			++*(statistics.begin() + score/10);
	}
	for (auto i : statistics)
		std::cout << i << " ";
}