# ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat(void);
	~WrongCat(void);

	WrongCat(WrongCat const& object);
	WrongCat& operator=(WrongCat const& object);

	void makeSound(void) const;
};

#endif