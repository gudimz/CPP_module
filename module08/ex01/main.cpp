
#include "span.hpp"
void testAddNumbers(Span sp) {
	try {
		std::cout << std::endl << YEL "*** Called sp.shortestSpan() ***" REST << std::endl;
		std::cout << "shortest: " GREEN << sp.shortestSpan() << REST << std::endl;
	} catch (std::exception& e) {
		std::cout << RED << e.what() << REST << std::endl;
	}
	try {
		std::cout << YEL "*** Called sp.longestSpan() ***" REST << std::endl;
		std::cout << "longest: " GREEN << sp.longestSpan() << REST << std::endl << std::endl;
	} catch (std::exception& e) {
		std::cout << RED << e.what() << REST << std::endl;
	}
}

int main(void) {
	std::cout << std::endl << CYAN "*** Test №1 << Empty Object >> ***" REST << std::endl << std::endl;

	Span sp = Span(5);
	std::cout << WHITE "Create Span(5)" REST << std::endl;
	testAddNumbers(sp);

	std::cout << std::endl << "*** Called sp.addNumber" GREEN "(5)" REST << " ***" REST << std::endl;
	try {
		sp.addNumber(5);
	} catch (std::exception& e) {
		std::cout << RED << e.what() << REST << std::endl;
	}
	testAddNumbers(sp);

	std::cout << std::endl << CYAN "*** Test №2 << more than 1 numbers >> ***" REST << std::endl << std::endl;
	std::cout << "*** Called sp.addNumber" GREEN "(3)" REST << "***" REST << std::endl;
	try {
		sp.addNumber(3);
	} catch (std::exception& e) {
		std::cout << RED << e.what() << REST << std::endl;
	}
	testAddNumbers(sp);

	std::cout << "*** Called sp.addNumber" GREEN "(17)" REST << " ***" REST << std::endl;
	try {
		sp.addNumber(17);
	} catch (std::exception& e) {
		std::cout << RED << e.what() << REST << std::endl;
	}
	testAddNumbers(sp);

	std::cout << "*** Called sp.addNumber" GREEN "(9)" REST << " ***" REST << std::endl;
	try {
		sp.addNumber(9);
	} catch (std::exception& e) {
		std::cout << RED << e.what() << REST << std::endl;
	}
	testAddNumbers(sp);

	std::cout << "*** Called sp.addNumber" GREEN "(11)" REST << " ***" REST << std::endl;
	try {
		sp.addNumber(11);
	} catch (std::exception& e) {
		std::cout << RED << e.what() << REST << std::endl;
	}
	testAddNumbers(sp);

	std::cout << CYAN "*** Test №3 << larger maximum size >> ***" REST << std::endl << std::endl;

	std::cout << "*** Called sp.addNumber" GREEN "(11)" REST << " ***" REST << std::endl;
	try {
		sp.addNumber(21);
	} catch (std::exception& e) {
		std::cout << RED << e.what() << REST << std::endl;
	}

	std::cout << std::endl << CYAN "*** Test №4 << create an object from 10,000 numbers >> ***" REST << std::endl;

	std::vector<int> v(10000);
	for (unsigned long i = 0; i < v.size(); ++i) {
		v[i] = i + 1;
	}
	std::cout << std::endl << WHITE "Create Span(10000)" REST << std::endl;
	Span spRange(v.size());
	try {
		spRange.addRangeNumber(v.begin(), v.end());
	} catch (std::exception& e) {
		std::cout << RED << e.what() << REST << std::endl;
	}
	testAddNumbers(spRange);

	std::cout << CYAN "*** Test №5 << larger maximum size for range >> ***" REST << std::endl << std::endl;

	try {
		spRange.addRangeNumber(v.begin(), v.end());
	} catch (std::exception& e) {
		std::cout << RED << e.what() << REST << std::endl;
	}
	std::cout << std::endl << CYAN "*** End of Test >> ***" REST << std::endl << std::endl;
	return 0;
}