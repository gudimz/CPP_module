# ifndef ICE_HPP
#define ICE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria {
public:
Ice(void);
~Ice(void);

Ice(Ice const& object);
Ice& operator=(Ice const& object);

AMateria* clone() const;
void use(ICharacter& target);
};

#endif