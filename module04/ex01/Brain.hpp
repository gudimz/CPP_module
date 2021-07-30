# ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>

class Brain {
private:
	std::string _idea[100];
public:
	Brain(void);
	~Brain(void);

	Brain(Brain const& object);
	Brain& operator=(Brain const& object);

	std::string getIdea(int index) const;
	void setIdea(int index, std::string idea);
};

#endif