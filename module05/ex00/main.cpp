#include "Bureaucrat.hpp"

# define GREEN "\x1b[1;32m"
# define WHITE "\x1b[37m"
# define RED "\x1b[1;31m"
# define YEL "\x1b[1;33m"
# define MAG "\x1b[1;35m"
# define CYAN "\x1b[1;36m"
# define REST "\x1b[0m"

int main (void) {
	std::cout << std::endl << GREEN "*** Test №1 << High and low grade when creating an object >> ***" REST << std::endl;
	std::cout << std::endl << YEL "*** Max(\"Max\", 151) ***" REST << std::endl;
	try {
		Bureaucrat Max("Max", 151);
		std::cout << Max << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << YEL "*** Low(\"Low\", 0) ***" REST << std::endl;
	try {
		Bureaucrat Low("Low", 0);
		std::cout << Low << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << YEL "*** Copy = Max(\"Max\", 151) ***" REST << std::endl;
	try {
		Bureaucrat Max("Max", 151);
		Bureaucrat Copy(Max);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << YEL "*** Norm(\"Norm\", 150) ***" REST << std::endl;
	try {
		Bureaucrat Norm("Norm", 150);
		std::cout << Norm << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << GREEN "*** Test №2 << Increment >> ***" REST << std::endl;
	try {
		Bureaucrat John("John", 4);
		while (21) {
			std::cout << John << std::endl;
			John.increment();
		}
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << GREEN "*** Test №3 << Decrement >> ***" REST << std::endl;
	try {
		Bureaucrat Kate("Kate", 146);
		while (21) {
			std::cout << Kate << std::endl;
			Kate.decrement();
		}
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}