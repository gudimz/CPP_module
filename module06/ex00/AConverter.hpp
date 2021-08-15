# ifndef ACONVERTER_HPP
#define ACONVERTER_HPP

# include <iostream>
# include <string>

class AConverter {
protected:
	std::string _strToConvert;
public:
	AConverter(void);
	AConverter(std::string strToConvert);
	virtual ~AConverter(void);

	AConverter(AConverter const& object);
	AConverter& operator=(AConverter const& object);

	std::string getStrToConvert(void) const;
	void setStrToConvert(std::string const& str);

	virtual char castToChar(void) const = 0;
	virtual int castToInt(void) const = 0;
	virtual float castToFloat(void) const = 0;
	virtual double castToDouble(void) const = 0;
	virtual void printResult(void) const = 0;

	class Impossible: public std::exception {
	public:
		const char* what(void) const throw();
	};

	class NonDisplayable: public std::exception {
	public:
		const char* what(void) const throw();
	};

	class Nan: public std::exception {
	public:
		const char* what(void) const throw();
	};

	class Nanf: public std::exception {
	public:
		const char* what(void) const throw();
	};
};

#endif