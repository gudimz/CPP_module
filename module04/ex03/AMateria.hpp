# ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria {
protected:
	std::string _type;
public:
AMateria(void);
AMateria(std::string const& type);
virtual ~AMateria(void);

AMateria(AMateria const& object);
AMateria& operator=(AMateria const& object);

std::string const & getType() const; //Returns the materia type
virtual AMateria* clone() const = 0;
virtual void use(ICharacter& target);
};

#endif