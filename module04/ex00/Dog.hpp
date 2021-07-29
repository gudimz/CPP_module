# ifndef DOG_HPP
#define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal {
public:
	Dog(void);
	~Dog(void);

	Dog(Dog const& object);
	Dog& operator=(Dog const& object);

	void makeSound(void) const;
};

#endif