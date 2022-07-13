#include <iostream>
#include <vector>
#include <algorithm>

void func1();
void elimDups(std::vector<int> &v);

int main()
{

}

void func1()
{
	std::vector<int> v = {1, 2, 4, 1, 2, 6, 5, 9, 0};
	elimDups(v);
}

void elimDups(std::vector<int> &v) {
	std::sort(v.begin(), v.end());
	v.erase(std::unique(v.begin(), v.end()), v.end());
}
