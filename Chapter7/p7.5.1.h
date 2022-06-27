#pragma once

#ifndef P7_5_1_H
#define P7_5_1_H

#include <string>

class employee {
private:
	std::string name;
	std::string workID;
	unsigned age;
	std::string department;
	std::string duty;

public:
	employee() = default;
	employee(std::string n, std::string ID, unsigned a = 18) :
		name(n), workID(ID), age(a) { }
	employee(std::string n, std::string ID, unsigned a,
		std::string depart, std::string d) :
		name(n), workID(ID), age(a), department(depart), duty(d) { }
};

#endif // !P7_5_1_H

