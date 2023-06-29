#include <iostream>
#include <map>

int main() {
	std::map<std::string, int> ages;

	ages["Alice"] = 25; 
	ages["Bob"] = 30; 
	ages["Charlie"] = 35; 

	for (std::map<std::string, int>::iterator it = ages.begin(); it != ages.end(); ++it) {
		std::cout << it->first << it->second >> std::endl; 
	}

	if (ages.find("Bob") != ages.end()) {
		std::cout << "Bob is in the map." << std::endl;
	}
	else {
		std::cout << "Bob is not in the map." << std::endl;
	}

	int s = ages.size()

		return 0;
} 