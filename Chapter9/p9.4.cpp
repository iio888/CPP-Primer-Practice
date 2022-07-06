#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v;
	int pre = v.capacity();
	for (int i = 0; i!=50; i++) {
		v.push_back(i);
		if (i != 0) {
			if (pre != v.capacity())
				std::cout << "\n";
			else
				std::cout << "\t";
		}
		std::cout << "size: " << v.size() << "  capacity: " << v.capacity();
		pre = v.capacity();
	}

	std::vector<int> vi;
	vi.reserve(1024);
	for (int i = 1; i!=256; i++) {
		vi.push_back(i);
	}
	std::cout << "size: " << vi.size() << "  capacity: " << vi.capacity() << std::endl;
	vi.resize(vi.size() + vi.size()/2);
	std::cout << "size: " << vi.size() << "  capacity: " << vi.capacity() << std::endl;


	return 0;
}