#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA {
	private:
		Weapon& _Weapon;
		std::string _name;
	public:
		HumanA(std::string name, Weapon& Weapon);
		~HumanA(void);
		void attack(void);
};

#endif