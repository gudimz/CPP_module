# ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <stack>
# include <deque>
# include <iostream>

template <typename T>
class MutantStack: public std::stack<T> {
public:
	typedef typename std::deque<T>::iterator iterator;
	typedef typename std::deque<T>::const_iterator const_iterator;
	typedef typename std::deque<T>::reverse_iterator reverse_iterator;
	typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;

	MutantStack(void);
	~MutantStack(void);

	MutantStack(MutantStack<T> const& object);
	MutantStack<T>& operator=(MutantStack<T> const& object);

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