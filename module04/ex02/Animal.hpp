# ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>

class Animal {
protected:
	std::string _type;
public:
	Animal(void);
	Animal(std::string type);
	virtual ~Animal(void);

	Animal(Animal const& object);
	Animal& operator=(Animal const& object);

	virtual void makeSound(void) const = 0;
	std::string getType(void) const;
};

#endif