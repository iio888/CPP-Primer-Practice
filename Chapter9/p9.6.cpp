#include <iostream>
#include <stack>
#include <string>

int main()
{
	std::string expression = "hello world (aab)";
	bool bracket = false;
	std::stack<char> stk;
	for (auto i : expression) {
		if (!bracket) {
			if (i == '(') {
				stk.push(i);
				bracket = true;
			} else {
				std::cout << i;
			}
		} else {
			if (i == ')') {
				while (!stk.empty()) {
					stk.pop();
				}
				std::cout << "(read)";
				bracket = false;
			} else {
				stk.push(i);
			}
		}
	}

	return 0;
}
