#include <iostream>

class NoDefault {
public:
	NoDefault(int a) {
		std::cout << "int" << std::endl;
	}
};

class C {
	NoDefault mem;
	C(int j = 0) : mem(j) { }
};