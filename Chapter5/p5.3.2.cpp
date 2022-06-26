#include <iostream>
void func1();
void func2();
void func3();
void func4();

int main()
{
	//func1();
	//func2();
	//func3();
	func4();

	return 0;
}

void func1()
{
	int vowelCnt = 0;
	char letter;
	while (std::cin >> letter) {
		if (letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u')
			++vowelCnt;
	}
	std::cout << vowelCnt << std::endl;
}

void func2()
{
	unsigned aCnt, eCnt, iCnt, oCnt, uCnt;
	aCnt = eCnt = iCnt = oCnt = uCnt = 0;

	char letter;
	while (std::cin >> letter) {
		switch (letter) {
		case 'a':
		case 'A':
			++aCnt;
			break;
		case 'e':
		case 'E':
			++eCnt;
			break;
		case 'i':
		case 'I':
			++iCnt;
			break;
		case 'o':
		case 'O':
			++oCnt;
			break;
		case 'u':
		case 'U':
			++uCnt;
			break;
		}
	}

	std::cout << aCnt << " " << eCnt << " " << iCnt << " " << oCnt << " " << uCnt << std::endl;
}

void func3()
{
	unsigned aCnt, eCnt, iCnt, oCnt, uCnt, spaceCnt, tabCnt, enterCnt;
	aCnt = eCnt = iCnt = oCnt = uCnt = spaceCnt = tabCnt = enterCnt = 0;

	char letter;
	while (std::cin.get(letter)) {
		switch (letter) {
		case 'a':
			++aCnt;
			break;
		case 'e':
			++eCnt;
			break;
		case 'i':
			++iCnt;
			break;
		case 'o':
			++oCnt;
			break;
		case 'u':
			++uCnt;
			break;
		case ' ':
			++spaceCnt;
			break;
		case '\t':
			++tabCnt;
			break;
		case '\r':
			++enterCnt;
			break;
		}
	}

	std::cout << aCnt << " " << eCnt << " " << iCnt << " " << oCnt << " " << uCnt
		<< " " << spaceCnt << " " << tabCnt << " " << enterCnt << std::endl;
}

void func4()
{
	unsigned aCnt, eCnt, iCnt, oCnt, uCnt, ff, fl, fi;
	aCnt = eCnt = iCnt = oCnt = uCnt = ff = fl = fi = 0;

	char letter;
	while (std::cin >> letter) {
		switch (letter) {
		case 'f': {
			char next;
			bool flag = true;
			if (std::cin >> next) {
				switch (next) {
				case 'f':
					++ff;
					break;
				case 'l':
					++fl;
					break;
				case 'i':
					++fi;
					++iCnt;
					break;
				default:
					flag = false;
					break;
				}
			}
			if (flag)
				break;
			else
				;
		}
		case 'a':
			++aCnt;
			break;
		case 'e':
			++eCnt;
			break;
		case 'i':
			++iCnt;
			break;
		case 'o':
			++oCnt;
			break;
		case 'u':
			++uCnt;
			break;
		}
	}


	std::cout << aCnt << " " << eCnt << " " << iCnt << " " << oCnt << " " << uCnt
		<< " " << ff << " " << fl << " " << fi << std::endl;
}