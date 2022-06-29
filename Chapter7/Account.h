#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

class Account {
private:
	std::string owner;
	long long amount;
	static double rate;
public:
	double getInterest() {
		return amount * rate;
	}
	double getAmount() {
		return amount += getInterest();
	}
};
double Account::rate = 0.03;

#endif // !ACCOUNT_H

