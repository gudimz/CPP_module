# ifndef TYPEDOUBLE_HPP
#define TYPEDOUBLE_HPP

# include "AConverter.hpp"
# include <iostream>

class TypeDouble: public AConverter {
private:
	double _value;
public:
	TypeDouble(void);
	TypeDouble(std::string strToConvert);
	~TypeDouble(void);

	TypeDouble(TypeDouble const& object);
	TypeDouble& operator=(TypeDouble const& object);

	char castToChar(void) const;
	int castToInt(void) const;
	float castToFloat(void) const;
	double castToDouble(void) const;
	void printResult(void) const;

};

#endif