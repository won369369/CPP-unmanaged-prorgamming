//#include <iostream>
//
//class Base {
//	virtual void print(){}
//};
//
//class Derived : public Base {
//};
//
//int main() {
//
//	//Static cast
//	int a = 10;
//	double b = static_cast<double>(a); 
//
//	//Dynamic cast
//	Base* base = new Derived; 
//	Derived* derived = dynamic_cast<Derived*>(base); 
//
//	//Const cast
//	const int c = 10; 
//	int* d = const_cast<int*>(&c);
//
//	//Reinterpret cast 
//	int e = 10;
//	char* p = reinterpret_cast<char*>(&e); 
//	return 0; 
//}