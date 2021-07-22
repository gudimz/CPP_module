#include <string>
#include <iostream>
#include <fstream>

std::string lineReplace(std::string line, std::string s1, std::string s2) {
	int pos = 0;

	while ((pos = line.find(s1)) != -1) {
		line.erase(pos, s1.length());
		line.insert(pos, s2);
	}
	return line;
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Error!" << std::endl << "Wrong number of arguments" << std::endl;
		return 1;
	}
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (!s1.length() || !s2.length()) {
		std::cout << "Error!" << std::endl << "You passed empty s1 or s2"  << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::ifstream file(filename);
	if (!file) {
		std::cout << "Error!" << std::endl << "Could not open file" << std::endl;
		return 1;
	}
	std::ofstream fileReplace(filename + ".replace");
	std::string line;
	int pos;
	while (getline(file, line)) {
		pos = line.find(s1);
		if (pos != -1) {
			fileReplace << lineReplace(line, s1, s2);
		} else {
			fileReplace << line;
		}
		file.good() ? fileReplace << std::endl : fileReplace << "";
	}
	file.close();
	fileReplace.close();
	return 0;
}