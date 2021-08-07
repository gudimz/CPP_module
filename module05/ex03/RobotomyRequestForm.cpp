#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy Request Form", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request Form", 72, 45) {
	this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& object) : Form(object) {
	this->_target = object.getTarget();
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& object) {
	this->Form::operator=(object);
	this->_target = object.getTarget();
	return *this;
}

std::string const& RobotomyRequestForm::getTarget(void) const {
	return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
	if (this->getGradeExec() < executor.getGrade()) {
		throw GradeTooLowException();
	}
	if (getSign() == false) {
		throw NotSignedException();
	}
	std::cout << "* LOUD DRILLING NOISE *" << std::endl;
	std::srand(time(NULL));
	if (!(rand() % 2)) {
		std::cout << "Form " CYAN << _target
		<< REST GREEN " has been robotomized successfully 50\% of the time" REST << std::endl;
	} else {
		std::cout << "Form " CYAN << _target
		<< REST RED " has not been robotomized successfully 50\% of the time" REST << std::endl;
	}
}