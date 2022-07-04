#include <iostream>
#include <list>
#include <forward_list>
#include <string>

void func1();
void func2(std::forward_list<std::string> flst, std::string s1, std::string s2);

int main()
{
	//func1();
	std::forward_list<std::string> flst = {"hello", "world", "man"};
	func2(flst, "world", "HeyHey");

	return 0;
}

void func1()
{
	std::forward_list<int> flist = {1, 2, 3, 4, 5, 6};
	auto pre = flist.before_begin();
	auto cur = flist.begin();
	while (cur!=flist.end() ) {
		if (*cur%2 == 1)
			cur = flist.erase_after(pre);
		else {
			pre = cur;
			++cur;
		}
	}
	for (auto i : flist)
		std::cout << i << " ";
	std::cout << std::endl;
}

void func2(std::forward_list<std::string> flst, std::string s1, std::string s2)
{
	auto cur = flst.begin();
	auto pre = flst.before_begin();
	while (cur != flst.end()) {
		if (*cur == s1) {
			flst.emplace_after(cur, s2);
			break;
		} else {
			++cur;
			if (cur == flst.end())
				flst.emplace_after(pre, s2);
		}
		pre = cur;
	}
	for (auto &i : flst)
		std::cout << i << " ";
	std::cout << std::endl;
}