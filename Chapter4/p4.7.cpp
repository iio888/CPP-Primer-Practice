#include <iostream>
#include <vector>
#include <ctime>

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
	std::vector<int> v;
	for (int i = 0; i<10; i++)
		v.push_back(i);
	
	for (auto &i : v) {
		std::cout << ((i%2 == 1) ? (i = i*2) : i) << " ";
	}
}

void func2() {
	srand((unsigned)time(NULL));
	std::vector<int> score;
	for (int i = 0; i<10; i++)
		score.push_back(rand()%60 + 40);
	for (auto &i : score)
		std::cout << i << " ";

	std::cout << "\n\nVersion : Condition\n";
	for (auto &i : score) {
		std::string finalGrade = (i < 60) ? "fail"
			: (i < 75) ? "low pass"
			: (i < 90) ? "pass" : "high pass";
		std::cout << finalGrade << std::endl;
	}

	std::cout << "\nVersion : if-else\n";
	for (auto &i : score) {
		if (i < 60)
			std::cout << "fail\n";
		else if (i < 75)
			std::cout << "low pass\n";
		else if (i < 90)
			std::cout << "pass\n";
		else
			std::cout << "high pass\n";
	}
}