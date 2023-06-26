//#include <iostream>
//
//class MyClass {
//private:
//	int* data;
//public: 
//	MyClass(int size) {
//		data = new int[size]; 
//		for (int i = 0; i < size; i++) {
//			data[i] = i;
//		}
//	}
//
//	MyClass(const MyClass& source) {
//		this->data = new int[*(source.data)];
//		*(this->data) = *(source.data);
//	}
//
//	~MyClass() {
//		delete[] data; 
//	}
//
//	void printData() {
//		std::cout << *data << std::endl;
//	}
//};
//
//int main() {
//	MyClass obj1(10);
//	obj1.printData();
//
//	MyClass obj2 = obj1; 
//	obj2.printData();
//	return 0;
//}