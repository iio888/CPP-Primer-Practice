#include <iostream>
#include <string>
#include <vector>
#include <ctime>

void func1(std::vector<int> score, std::vector<char> grade);
void func2(std::vector<int> score, std::vector<char> grade);

int main()
{
	srand((unsigned)time(NULL));
	std::vector<int> score(10);
	for (auto &i : score) {
		i = rand()%61 + 40;
		std::cout << i << " ";
	}
	std::vector<char> grade = {'F', 'E', 'D', 'C', 'B', 'A'};

	std::cout << std::endl;
	//func1(score, grade);
	func2(score, grade);
	std::cout << std::endl;

	return 0;
}

void func1(std::vector<int> score, std::vector<char> grade)
{
	for (auto &i : score) {
		std::string letterGrade = "";
		if (i < 60) {
			letterGrade = grade[0];
		} else {
			letterGrade = grade[(i-50)/10];
			if (i%10 > 7)
				letterGrade += '+';
			else if (i == 100)
				;
			else if (i%10 < 3)
				letterGrade += '-';
		}
		std::cout << letterGrade << " ";
	}
}

void func2(std::vector<int> score, std::vector<char> grade)
{
	for (auto &i : score) {
		std::string letterGrade = "";
		letterGrade = i < 60 ? grade[0] : grade[(i-50)/10];
		letterGrade += i%10 > 7 ? "+" :
			i%10 < 3 && i!=100 ? "-" : "";
		std::cout << letterGrade << " ";
	}
}