#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

class Karen {
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	typedef void (Karen::*func)(void);
	func funcs[4];
public:
	Karen(void);
	~Karen(void);
	void complain(std::string level);
};

#endif