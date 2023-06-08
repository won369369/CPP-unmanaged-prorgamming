//class MyClass {
//public:
//	static int count;  // declaration of a static member variable
//};
//
//int MyClass::count = 0;  // definition of the static member variable
//
//int main() {
//	MyClass obj1;
//	obj1.count = 5;  // setting the static variable through obj1
//	MyClass obj2;
//	std::cout << obj2.count;  // accessing the static variable through obj2; prints "5"
//}
//
//class MyClass {
//public:
//	static int count;
//
//	static void incrementCount() {  // declaration and definition of a static member function
//		count++;
//	}
//};
//
//int MyClass::count = 0;
//
//int main() {
//	MyClass::incrementCount();  // calling the static function; no object is needed
//	std::cout << MyClass::count;  // accessing the static variable; prints "1"
//}
