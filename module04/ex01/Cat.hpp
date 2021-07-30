# ifndef CAT_HPP
#define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
private:
	Brain* _brain;
public:
	Cat(void);
	~Cat(void);

	Cat(Cat const& object);
	Cat& operator=(Cat const& object);

	void makeSound(void) const;
	Brain* getBrain(void) const;
};

#endif