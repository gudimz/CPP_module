#include "whatever.hpp"
# define GREEN "\x1b[1;32m"
# define RED "\x1b[1;31m"
# define YEL "\x1b[1;33m"
# define REST "\x1b[0m"
class Awesome {
public:
	Awesome(int n) : _n(n) {}

    bool operator==(Awesome const& rhs) const {return (this->_n == rhs._n);}
    bool operator!=(Awesome const& rhs) const {return (this->_n != rhs._n);}
    bool operator>(Awesome const& rhs) const {return (this->_n > rhs._n);}
    bool operator<(Awesome const& rhs) const {return (this->_n < rhs._n);}
    bool operator>=(Awesome const& rhs) const {return (this->_n >= rhs._n);}
    bool operator<=(Awesome const& rhs) const {return (this->_n <= rhs._n);}

	int get(void) const {return this->_n;}
private:
    int _n;
};

std::ostream & operator<<(std::ostream &os, Awesome const& rhs) {os << rhs.get(); return os;}

int main(void) {
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	std::cout << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl << std::endl;

	std::cout << GREEN "*** My test >> ***" REST << std::endl;
	Awesome x(21);
	Awesome y(42);
	a = 21;
	b = 21;
	::swap(x, y);
	std::cout << "x = " << x.get() << ", y = " << y.get() << std::endl;
	std::cout << "min(x, y) = " << ::min(x, y) << std::endl;
	std::cout << "max(x, y) = " << ::max(x, y) << std::endl;
	std::cout << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "&a = " << &a << ", &b = " << &b << std::endl;
	std::cout << "min(a, b) = " << &(::min(a, b)) << std::endl;
	std::cout << "max(a, b) = " << &(::max(a, b)) << std::endl;
	return 0;

}