# ifndef TYPEFLOAT_HPP
#define TYPEFLOAT_HPP

# include "AConverter.hpp"
# include <iostream>

class TypeFloat: public AConverter {
private:
	float _value;
public:
	TypeFloat(void);
	TypeFloat(std::string strToConvert);
	~TypeFloat(void);

	TypeFloat(TypeFloat const& object);
	TypeFloat& operator=(TypeFloat const& object);

	char castToChar(void) const;
	int castToInt(void) const;
	float castToFloat(void) const;
	double castToDouble(void) const;
	void printResult(void) const;

};

#endif