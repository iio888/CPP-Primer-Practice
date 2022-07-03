#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = {1, 2, 3};
	std::cout << v.at(0) << " "
		<< v[0] << " "
		<< v.front() << " "
		<< *v.begin() << std::endl;

	std::vector<int> vEmpty;
	//try {
	//	std::cout << vEmpty.at(0) << " ";
	//} catch (std::out_of_range outRangeErr) {
	//	std::cout << "Out of Range!\n";
	//	return -1;
	//}
	std::cout << vEmpty[0] << " "
		<< vEmpty.front() << " "
		<< *vEmpty.begin() << std::endl;

	return 0;
}