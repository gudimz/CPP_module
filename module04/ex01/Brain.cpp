#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Default brain constructor called!" << std::endl;
}

Brain::~Brain(void) {
	std::cout << "Default brain destructor called!" << std::endl;
}

Brain::Brain(Brain const& object) {
	std::cout << "Brain copy constructor called!" << std::endl;
	*this = object;
}

Brain& Brain::operator=(Brain const& object) {
	if (this != &object) {
		for (int i = 0; i < 100; ++i) {
			setIdea(i, object.getIdea(i));
		}
	}
	return *this;
}

std::string Brain::getIdea(int index) const {
	return this->_idea[index];
}

void Brain::setIdea(int index, std::string idea) {
	this->_idea[index] = idea;
}