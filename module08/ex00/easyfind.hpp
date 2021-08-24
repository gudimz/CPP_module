# ifndef EASYFIND_HPP
#define EASYFIND_HPP

# define GREEN "\x1b[1;32m"
# define WHITE "\x1b[37m"
# define RED "\x1b[1;31m"
# define YEL "\x1b[1;33m"
# define MAG "\x1b[1;35m"
# define CYAN "\x1b[1;36m"
# define REST "\x1b[0m"

# include <iostream>
# include <algorithm>

template <typename T>
typename T::const_iterator easyfind(T const& container, int value) {
	return std::find(container.begin(), container.end(), value);
}

#endif