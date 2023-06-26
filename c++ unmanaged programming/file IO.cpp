//#include <iostream>
//#include <fstream>
//#include <string>
//
//int main() {
//	// Writing to a file. 
//	std::ofstream outfile("example.txt"); 
//	if (outfile.is_open()) {
//		outfile << "first line" << std::endl; 
//		outfile << "second line" << std::endl; 
//		outfile.close();
//	}
//	else {
//		std::cout << "Unable to open file for writing." << std::endl;
//	}
//
//	//Reading from a file
//	std::string line; 
//	std::ifstream infile("example.txt");
//	if (infile.is_open()) {
//		while (getline(infile, line)) {
//			std::cout << line << std::endl;
//		}
//		infile.close();
//	}
//	else {
//		std::cout << "Unable to open file for reading." << std::endl;
//	}
//
//	return 0;
//}
