# ifndef TYPECHAR_HPP
#define TYPECHAR_HPP

# include "AConverter.hpp"
# include <iostream>

class TypeChar: public AConverter {
private:
	char _value;
public:
	TypeChar(void);
	TypeChar(std::string strToConvert);
	~TypeChar(void);

	TypeChar(TypeChar const& object);
	TypeChar& operator=(TypeChar const& object);

	char castToChar(void) const;
	int castToInt(void) const;
	float castToFloat(void) const;
	double castToDouble(void) const;
	void printResult(void) const;
};

#endif