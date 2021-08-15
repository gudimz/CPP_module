#include "TypeChar.hpp"

TypeChar::TypeChar(void) {}

TypeChar::TypeChar(std::string strToConvert) : AConverter(strToConvert) {
	this->_value = strToConvert[0];
}

TypeChar::~TypeChar(void) {}

TypeChar::TypeChar(TypeChar const& object) {
	*this = object;
}

TypeChar& TypeChar::operator=(TypeChar const& object) {
	this->AConverter::operator=(object);
	this->_value = object._value;
	return *this;
}

char TypeChar::castToChar(void) const {
	return _value;
}

int TypeChar::castToInt(void) const {
	return static_cast<int>(_value);
}

float TypeChar::castToFloat(void) const {
	return static_cast<float>(_value);
}

double TypeChar::castToDouble(void) const {
	return static_cast<double>(_value);
}

void TypeChar::printResult(void) const {
	std::cout << "char: '" << _value << "'" << std::endl;
	std::cout << "int: " << castToInt() << std::endl;
	std::cout << "float: " << castToFloat() << ".0f" << std::endl;
	std::cout << "double: " << castToDouble() << ".0" << std::endl;
}