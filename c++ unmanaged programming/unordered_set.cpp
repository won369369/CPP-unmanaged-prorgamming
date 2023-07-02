//#include <unordered_set>
//#include <iostream>
//
//int main() {
//	std::unordered_set<int> mySet; 
//
//	mySet.insert(1);
//	mySet.insert(2);
//	mySet.insert(3);
//	
//	for (auto it = mySet.begin(); it != mySet.end(); ++it) {
//		int i = *it;
//	}
//
//	if (mySet.find(2) != mySet.end()) {
//		std::cout << "found" << std::endl; 
//	}
//	else {
//		std::cout << "not found" << std::endl;
//
//	}
//
//	mySet.erase(2); 
//
//	if (mySet.find(2) != mySet.end()) {
//		std::cout << "found" << std::endl;
//
//	}
//	else {
//		std::cout << "not found" << std::endl;
//	}
//
//	return 0;
//}