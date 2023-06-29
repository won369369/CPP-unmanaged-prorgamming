//#include <iostream>
//#include <stdexcept>
//
//int divide(int numerator, int denominator) {
//	if (denominator == 0) {
//		throw std::invalid_argument("Error");
//	}
//	return numerator / denominator;
//}
//
//int main() {
//	try {
//		divide(10, 2);
//		divide(10, 0); 
//	}
//	catch (const std::invalid_argument& e) {
//		std::cerr << e.what() << std::endl;
//	}
//	catch (...) {
//		std::cerr << "Caught unknown exception" << std::endl;
//	}
//	return 0;
//}