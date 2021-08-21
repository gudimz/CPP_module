#include <iostream>
#include "Array.hpp"
#include <sstream>

# define GREEN "\x1b[1;32m"
# define RED "\x1b[1;31m"
# define YEL "\x1b[1;33m"
# define REST "\x1b[0m"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;

	std::cout << std::endl << GREEN "*** My test >> ***" REST << std::endl;

	Array<int> myNumbers(MAX_VAL);
	for (int i = 0; i < MAX_VAL; i++) {
        myNumbers[i] = i;
	}
    Array<int> copyMyNumbers = myNumbers;
	std::cout << YEL "size" REST << " myNumbers: " YEL << myNumbers.size() << REST << std::endl;
	std::cout << YEL "size" REST << " copyMyNumbers: " YEL << copyMyNumbers.size() << REST << std::endl;
    std::cout << "myNumbers[" GREEN << "21" REST << "]: " << GREEN << myNumbers[21] << REST << std::endl;
	std::cout << "copyMyNumbers[" GREEN << "21" REST << "]: " << GREEN << copyMyNumbers[21] << REST << std::endl;
    std::cout << "myNumbers[" GREEN << "42" REST << "]: " << GREEN << myNumbers[42] << REST << std::endl;
	std::cout << "copyMyNumbers[" GREEN << "42" REST << "]: " << GREEN << copyMyNumbers[42] << REST << std::endl;

    return 0;
}