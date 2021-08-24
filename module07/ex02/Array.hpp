# ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>

template <typename T>
class Array {
private:
	unsigned int _size;
	T* _array;;
public:
	Array(void) : _size(0), _array(new T[_size]) {}
	Array(unsigned int n) : _size(n), _array(new T[_size]) {
		for (unsigned int i = 0; i < _size; ++i) {
			_array[i] = 0;
		}
	}
	~Array(void) {
		if (_array) {
			delete [] _array;
		}
	}

	Array(Array const& object) : _size(object._size), _array(new T[_size]) {
		for (unsigned int i = 0; i < _size; ++i) {
			this->_array[i] = object._array[i];
		}
	}

	Array operator=(Array const& object) {
		if (this != &object) {
			delete [] this->_array;
			this->_size = object._size;
			this->_array = new T[_size];
			for (unsigned int i = 0; i < _size; ++i) {
				this->_array[i] = object._array[i];
			}
		}
		return *this;
	}

	T& operator[](const unsigned int index) {
		if (index >= _size || index < 0) {
			throw std::exception();
		}
		return _array[index];
	}

	T const& operator[](const unsigned int index) const {
		if (index >= _size || index < 0) {
			throw std::exception();
		}
		return _array[index];
	}
	unsigned int size(void) const {
		return _size;
	}
};

#endif