#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

# define GREEN "\x1b[1;32m"
# define WHITE "\x1b[37m"
# define RED "\x1b[1;31m"
# define YEL "\x1b[1;33m"
# define MAG "\x1b[1;35m"
# define CYAN "\x1b[1;36m"
# define REST "\x1b[0m"



class FragTrap: public virtual ClapTrap {
public:
	FragTrap(void);
	FragTrap(std::string name);
	~FragTrap(void);
	FragTrap& operator=(FragTrap const& object);
	FragTrap(FragTrap const& object);

	void highFivesGuys(void);
};

#endif