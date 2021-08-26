#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) {}

template <typename T>
MutantStack<T>::~MutantStack(void) {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const& object) {
	*this = object;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack<T> const& object) {
	this->c = object.c;
	return *this;
}