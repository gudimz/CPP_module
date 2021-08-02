# ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter {
private:
	std::string _name;
	AMateria* _inventory[4];
	int _countEquip;
public:
	Character(void);
	Character(std::string name);
	~Character(void);

	Character(Character const& object);
	Character& operator=(Character const& object);

	std::string const& getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif