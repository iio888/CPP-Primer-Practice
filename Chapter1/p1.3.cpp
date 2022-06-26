#include <iostream>

int main() {
	/*
	There is a commment.
	/*There is a comment inside a comment.
	
	*/
	std::cout << "/*";
	std::cout << "*/";
	//std::cout << /* "*/" */;
	std::cout << /* "*/" /* "/*" */;
	return 0;
}