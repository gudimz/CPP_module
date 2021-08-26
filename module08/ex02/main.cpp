#include "mutantstack.hpp"

int main(void) {
	std::cout << std::endl << CYAN "*** Test №1 << MutantStack >> ***" REST << std::endl << std::endl;
	MutantStack<int> mstack;

	std::cout << "*** Called mstack.push" GREEN "(5)" REST << " ***" REST << std::endl;
	mstack.push(5);
	std::cout << "*** Called mstack.push" GREEN "(17)" REST << " ***" REST << std::endl;
	mstack.push(17);

	std::cout << GREEN "Top: " REST << mstack.top() << std::endl;
	std::cout << "*** Called mstack.pop" GREEN "()" REST << " ***" REST << std::endl;
	mstack.pop();
	std::cout << GREEN "Size: " REST << mstack.size() << std::endl;

	std::cout << "*** Called mstack.push" GREEN "(3)" REST << " ***" REST << std::endl;
	mstack.push(3);
	std::cout << "*** Called mstack.push" GREEN "(5)" REST << " ***" REST << std::endl;
	mstack.push(5);
	std::cout << "*** Called mstack.push" GREEN "(737)" REST << " ***" REST << std::endl;
	mstack.push(737);
	std::cout << "*** Called mstack.push" GREEN "(21)" REST << " ***" REST << std::endl;
	mstack.push(21);
	std::cout << "*** Called mstack.push" GREEN "(42)" REST << " ***" REST << std::endl;
	mstack.push(42);
	std::cout << "*** Called mstack.push" GREEN "(0)" REST << " ***" REST << std::endl;
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	std::cout << std::endl << YEL "*** Called iterator ***" REST << std::endl;
	std::cout << RED">>> while(mstack.begin() != mstack.end()) <<<" REST << std::endl;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl << CYAN "*** Test №2 << std::list >> ***" REST << std::endl << std::endl;
	{
		std::list<int> list;

		std::cout << "*** Called list.push_back" GREEN "(5)" REST << " ***" REST << std::endl;
		list.push_back(5);
		std::cout << "*** Called list.push_back" GREEN "(17)" REST << " ***" REST << std::endl;
		list.push_back(17);
		std::cout << "*** Called list.pop_back" GREEN "()" REST << " ***" REST << std::endl;
		list.pop_back();

		std::cout << GREEN "Size: " REST << list.size() << std::endl;

		std::cout << "*** Called list.push_back" GREEN "(3)" REST << " ***" REST << std::endl;
		list.push_back(3);
		std::cout << "*** Called list.push_back" GREEN "(5)" REST << " ***" REST << std::endl;
		list.push_back(5);
		std::cout << "*** Called list.push_back" GREEN "(737)" REST << " ***" REST << std::endl;
		list.push_back(737);
		std::cout << "*** Called list.push_back" GREEN "(21)" REST << " ***" REST << std::endl;
		list.push_back(21);
		std::cout << "*** Called list.push_back" GREEN "(42)" REST << " ***" REST << std::endl;
		list.push_back(42);
		std::cout << "*** Called list.push_back" GREEN "(0)" REST << " ***" REST << std::endl;
		list.push_back(0);

		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();
		++it;
		--it;

		std::cout << std::endl << YEL "*** Called iterator ***" REST << std::endl;
		std::cout << RED">>> while(list.begin() != list.end()) <<<" REST << std::endl;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::list<int> l(list);
	}

	std::cout << std::endl << CYAN "*** Test №3 << Check copy >> ***" REST << std::endl << std::endl;
	MutantStack<int> copyMstack = mstack;

	std::cout << "*** Called mstack.push" GREEN "(777)" REST << " ***" REST << std::endl;
	mstack.push(777);

	std::cout << std::endl << YEL "*** Called iterator for mstack ***" REST << std::endl;
	std::cout << RED">>> while(mstack.begin() != mstack.end()) <<<" REST << std::endl;
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}

	MutantStack<int>::iterator itCopy = copyMstack.begin();
	MutantStack<int>::iterator iteCopy = copyMstack.end();
	++itCopy;
	--itCopy;

	std::cout << std::endl << YEL "*** Called iterator for copyMstack ***" REST << std::endl;
	std::cout << RED">>> while(copyMstack.begin() != copyMstack.end()) <<<" REST << std::endl;
	while (itCopy != iteCopy)
	{
	std::cout << *itCopy << std::endl;
	++itCopy;
	}

	std::cout << std::endl << CYAN "*** End of Test >> ***" REST << std::endl << std::endl;
	return 0;
}