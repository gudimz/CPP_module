# ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <cmath>
# include <vector>

# define GREEN "\x1b[1;32m"
# define WHITE "\x1b[37m"
# define RED "\x1b[1;31m"
# define YEL "\x1b[1;33m"
# define MAG "\x1b[1;35m"
# define CYAN "\x1b[1;36m"
# define REST "\x1b[0m"

class Span {
private:
	std::vector<int> _numbers;
	unsigned int _maxSize;
public:
	Span(void);
	Span(unsigned int N);
	~Span(void);

	Span(Span const& object);
	Span& operator=(Span const& object);

	void addNumber(int number);

	template <typename InIterator>
	void addRangeNumber(InIterator start, InIterator finish) {
		while (start != finish) {
			addNumber(*start);
			++start;
		}
	}

	unsigned long shortestSpan(void);
	unsigned long longestSpan(void);

	class isFullException: public std::exception {
	public:
		const char* what(void) const throw() {
			return "Error: Object is full!";
		}
	};

	class isNotEnoughNumbersException: public std::exception {
	public:
		const char* what(void) const throw() {
			return "Error: Too few numbers!";
		}
	};
};

#endif