#include "AConverter.hpp"

AConverter::AConverter(void) {}

AConverter::AConverter(std::string strToConvert) : _strToConvert(strToConvert) {}

AConverter::~AConverter(void) {}

AConverter::AConverter(AConverter const& object) {
	*this = object;
}

AConverter& AConverter::operator=(AConverter const& object) {
	this->_strToConvert = object.getStrToConvert();
	return *this;
}

std::string AConverter::getStrToConvert(void) const {
	return _strToConvert;
}

void AConverter::setStrToConvert(std::string const& str) {
	this->_strToConvert = str;
}

const char* AConverter::Impossible::what() const throw() {
	return "impossible";
}

const char* AConverter::NonDisplayable::what() const throw() {
	return "Non displayable";
}