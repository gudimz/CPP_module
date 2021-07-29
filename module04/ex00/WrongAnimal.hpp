# ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
protected:
	std::string _type;
public:
	WrongAnimal(void);
	WrongAnimal(std::string type);
	virtual ~WrongAnimal(void);

	WrongAnimal(WrongAnimal const& object);
	WrongAnimal& operator=(WrongAnimal const& object);

	void makeSound(void) const;
	std::string getType(void) const;
};

#endif