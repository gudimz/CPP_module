#include <iostream>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string& stringREF = str;
	std::string* stringPTR = &str;

	std::cout << "&str       " << &str << std::endl;
	std::cout << "stringPTR  " << stringPTR << std::endl;
	std::cout << "&stringREF " << &stringREF << std::endl << std::endl;

	std::cout << "str        " << str << std::endl;
	std::cout << "*stringPTR " << *stringPTR << std::endl;
	std::cout << "stringREF  " << stringREF << std::endl;

	return 0;
}