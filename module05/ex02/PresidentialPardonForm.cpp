#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Presidential Pardon Form", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon Form", 25, 5) {
	this->_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& object) : Form(object) {
	this->_target = object.getTarget();
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& object) {
	this->Form::operator=(object);
	this->_target = object.getTarget();
	return *this;
}

std::string const& PresidentialPardonForm::getTarget(void) const {
	return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	if (this->getGradeExec() < executor.getGrade()) {
		throw GradeTooLowException();
	}
	if (getSign() == false) {
		throw NotSignedException();
	}
	std::cout << GREEN << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}