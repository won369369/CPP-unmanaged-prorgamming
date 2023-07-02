//#include <memory>
//#include <iostream>
//
//class MyClass {
//public: 
//	MyClass() {
//
//	}
//	~MyClass() {
//
//	}
//	void myFunction() {
//
//	}
//};
//
//void useWeakPtr(std::weak_ptr<MyClass> weakPtr) {
//	if (auto sharedPtr = weakPtr.lock()) {
//		sharedPtr->myFunction(); 
//	}
//	else {
//		std::cout << "Myclass instance deleted" << std::endl;
//	}
//}
//
//int main() {
//
//	std::weak_ptr<MyClass> myWeakPtr; 
//
//	{
//		std::shared_ptr<MyClass> mySharedPtr(new MyClass()); 
//
//		myWeakPtr = mySharedPtr; 
//		
//		useWeakPtr(myWeakPtr); 
//	}
//	return 0;
//}