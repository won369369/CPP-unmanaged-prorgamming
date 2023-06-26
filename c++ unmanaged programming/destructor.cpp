//#include <iostream>
//
//class MyClass {
//private: 
//	int* data; 
//public:
//	MyClass(int size) {
//		data = new int[size];
//		for (int i = 0; i < size; i++) {
// 			data[i] = i; 
//		}
//	}
//	~MyClass() {
//		delete[] data; 
//	}
//};
//
//int main() {
//	{
//		MyClass(20);
//	}
//	//object is out of scope here, so destructor will be called.
//	return 0;
//}