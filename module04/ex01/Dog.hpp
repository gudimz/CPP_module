# ifndef DOG_HPP
#define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
private:
	Brain* _brain;
public:
	Dog(void);
	~Dog(void);

	Dog(Dog const& object);
	Dog& operator=(Dog const& object);

	void makeSound(void) const;
	Brain* getBrain(void) const;
};

#endif