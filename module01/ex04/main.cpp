#include <string>
#include <iostream>
#include <fstream>

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
	std::string content;
	int pos;
	while (getline(file, content)) {
		pos = content.find(s1);
		if (pos != -1) {
			content.erase(pos, s1.length());
			content.insert(pos, s2);
			fileReplace << content << std::endl;
		} else {
			fileReplace << content << std::endl;
		}
	}
	file.close();
	return 0;
}