# ifndef CURE_HPP
#define CURE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria {
public:
Cure(void);
~Cure(void);

Cure(Cure const& object);
Cure& operator=(Cure const& object);

AMateria* clone() const;
void use(ICharacter& target);
};

#endif