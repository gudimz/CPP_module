#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void) {
	std::cout << std::endl << BACKG "*** Test №1 << High and low grade when creating an object >> ***" REST << std::endl;
	std::cout << std::endl << YEL "*** formMax(\"formMax\", 221, 150) ***" REST << std::endl;
	try {
		Form formMax("formMax", 221, 150);
		std::cout << formMax << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << YEL "*** formLow(\"formLow\", 150, 0) ***" REST << std::endl;
	try {
		Form formLow("formLow", 150, 0);
		std::cout << formLow << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << YEL "*** copyFormMax = formMax(\"formMax\", 221, 150) ***" REST << std::endl;
	try {
		Form formMax("formMax", 221, 150);
		Form copyFormMax(formMax);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << YEL "*** formNorm(\"formNorm\", 150, 1) ***" REST << std::endl;
	try {
		Form formNorm("formNorm", 150, 1);
		std::cout << formNorm << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << BACKG "*** Test №2 << Form is not signed >> ***" REST << std::endl;
	try {
		Bureaucrat John("John", 42);
		Form form("21A42", 21, 42);

		std::cout << John << std::endl;
		std::cout << form <<std::endl;
		John.signForm(form);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << std::endl << BACKG "*** Test №3 << Form is signed >> ***" REST << std::endl;
		Bureaucrat John("John", 21);
		Form form("21A42", 42, 150);

		std::cout << John << std::endl;
		std::cout << form <<std::endl;
		John.signForm(form);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}