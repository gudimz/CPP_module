# ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# define GREEN "\x1b[1;32m"
# define WHITE "\x1b[37m"
# define RED "\x1b[1;31m"
# define YEL "\x1b[1;33m"
# define MAG "\x1b[1;35m"
# define CYAN "\x1b[1;36m"
# define REST "\x1b[0m"

# include <stack>
# include <deque>
# include <list>
# include <iostream>

template <class T>
class MutantStack: public std::stack<T> {
public:

	MutantStack(void) : std::stack<T>() {}
	~MutantStack(void) {}

	MutantStack(MutantStack<T> const& object) : std::stack<T>(object) {}
	MutantStack<T>& operator=(MutantStack<T> const& object) {
		this->c = object.c;
		return *this;
	}

	typedef typename std::deque<T>::iterator iterator;
	typedef typename std::deque<T>::const_iterator const_iterator;
	typedef typename std::deque<T>::reverse_iterator reverse_iterator;
	typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;

	iterator begin(void) {
		return this->c.begin();
	}
	iterator end(void) {
		return this->c.end();
	}

	const_iterator cbegin(void) const {
		return this->c.cbegin();
	}
	const_iterator cend(void) const {
		return this->c.cend();
	}

	reverse_iterator rbegin(void) {
		return this->c.rbegin();
	}
	reverse_iterator rend(void) {
		return this->c.rend();
	}

	const_reverse_iterator crbegin(void) const {
		return this->c.crbegin();
	}
	const_reverse_iterator crend(void) const {
		return this->c.crend();
	}

};

#endif