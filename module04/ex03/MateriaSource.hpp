# ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	AMateria* _materias[4];
public:
MateriaSource(void);
~MateriaSource(void);

MateriaSource(MateriaSource const& object);
MateriaSource& operator=(MateriaSource const& object);

void learnMateria(AMateria*);
AMateria* createMateria(std::string const & type);
};

#endif