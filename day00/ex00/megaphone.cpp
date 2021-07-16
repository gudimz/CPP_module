#include <iostream>

int main(int argc, char *argv[]) {
	if (argc > 1) {
		for (int i = 1; i < argc; ++i) {
			for (size_t j = 0; argv[i][j]; ++j) {
				char c = argv[i][j];
				std::cout << static_cast<char>(toupper(c));
			}
		}
	} else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	std::cout << std::endl;
	return 0;
}