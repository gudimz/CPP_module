#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main (void) {
	std::cout << std::endl << BACKG "*** Test №1 << Form not signed >> ***" REST << std::endl;
	try {
		std::cout << std::endl << YEL "*** Print info ***" REST << std::endl;
		Bureaucrat Max("Max", 150);
		std::cout << Max << std::endl;
		ShrubberyCreationForm form("form");
		std::cout << form << std::endl;
		std::cout << std::endl << YEL "*** Print actions ***" REST << std::endl;
		Max.signForm(form);
		Max.executeForm(form);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << BACKG "*** Test №2 << Form not executed >> ***" REST << std::endl;
	try {
		std::cout << std::endl << YEL "*** Print info ***" REST << std::endl;
		Bureaucrat Max("Max", 46);
		std::cout << Max << std::endl;
		RobotomyRequestForm form("form");
		std::cout << form << std::endl;
		std::cout << std::endl << YEL "*** Print actions ***" REST << std::endl;
		Max.signForm(form);
		Max.executeForm(form);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << BACKG "*** Test №3 << ShrubberyCreationForm >> ***" REST << std::endl;
	try {
		std::cout << std::endl << YEL "*** Print info ***" REST << std::endl;
		Bureaucrat Max("Max", 137);
		std::cout << Max << std::endl;
		ShrubberyCreationForm form("form");
		std::cout << form << std::endl;
		std::cout << std::endl << YEL "*** Print actions ***" REST << std::endl;
		Max.signForm(form);
		Max.executeForm(form);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << BACKG "*** Test №4 << RobotomyRequestForm >> ***" REST << std::endl;
	try {
		std::cout << std::endl << YEL "*** Print info ***" REST << std::endl;
		Bureaucrat Max("Max", 45);
		std::cout << Max << std::endl;
		RobotomyRequestForm form("form");
		std::cout << form << std::endl;
		std::cout << std::endl << YEL "*** Print actions ***" REST << std::endl;
		Max.signForm(form);
		Max.executeForm(form);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << BACKG "*** Test №5 << PresidentialPardonForm >> ***" REST << std::endl;
	try {
		std::cout << std::endl << YEL "*** Print info ***" REST << std::endl;
		Bureaucrat Max("Max", 5);
		std::cout << Max << std::endl;
		PresidentialPardonForm form("form");
		std::cout << form << std::endl;
		std::cout << std::endl << YEL "*** Print actions ***" REST << std::endl;
		Max.signForm(form);
		Max.executeForm(form);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}