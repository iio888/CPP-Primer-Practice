#pragma once

#ifndef PERSON_H
#define PERSON_H

#include <string>
class Person;

class Person {
	friend std::istream &read(std::istream &in, Person &p);
private:
	std::string name;
	std::string address;

public:
	Person() = default;
	Person(const std::string n, const std::string add) :
		name(n), address(add) { }

	std::string getName() const {
		return name;
	}
	std::string getAddress() const {
		return address;
	}
};

std::ostream &print(std::ostream &out, const Person &p);

#endif // !PERSON_H

