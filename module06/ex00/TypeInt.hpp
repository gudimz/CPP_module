# ifndef TYPEINT_HPP
#define TYPEINT_HPP

# include "AConverter.hpp"
# include <iostream>

class TypeInt: public AConverter {
private:
	long int _value;
public:
	TypeInt(void);
	TypeInt(std::string strToConvert);
	~TypeInt(void);

	TypeInt(TypeInt const& object);
	TypeInt& operator=(TypeInt const& object);

	char castToChar(void) const;
	int castToInt(void) const;
	float castToFloat(void) const;
	double castToDouble(void) const;
	void printResult(void) const;

};

#endif