#include "span.hpp"

Span::Span(void) : _maxSize(0) {}

Span::Span(unsigned int N) : _maxSize(N) {}

Span::~Span(void) {}

Span::Span(Span const& object) {
	*this = object;
}

Span& Span::operator=(Span const& object) {
	if (this != &object) {
		this->_maxSize = object._maxSize;
		this->_numbers = object._numbers;
	}
	return *this;
}

void Span::addNumber(int number) {
	if (_numbers.size() == _maxSize) {
		throw isFullException();
	} else {
		_numbers.push_back(number);
	}
}

unsigned long Span::shortestSpan(void) const {
	if (_numbers.size() < 2) {
		throw isNotEnoughNumbersException();
	}

	std::vector<int>::const_iterator iter;
	int result = longestSpan();
	for (iter = _numbers.begin(); (iter + 1) != _numbers.end(); ++iter) {
		if (result > std::abs(*(iter + 1) - *iter)) {
			result = std::abs(*(iter + 1) - *iter);
		}
	}
	return result;
}

unsigned long Span::longestSpan(void) const {
	if (_numbers.size() < 2) {
		throw isNotEnoughNumbersException();
	}

	long long max = *std::max_element(_numbers.begin(), _numbers.end());
	long long min = *std::min_element(_numbers.begin(), _numbers.end());
	return max - min;
}