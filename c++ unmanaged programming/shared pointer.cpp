//#include <memory>
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
//int main() {
//	{
//	std::shared_ptr<MyClass> myClassPtr1(new MyClass()); 
//
//		myClassPtr1->myFunction();
//
//		{
//			std::shared_ptr<MyClass> MyClassPtr2 = myClassPtr1;
//
//			MyClassPtr2->myFunction();
//		}
//		myClassPtr1->myFunction();
//	}
//	return 0;
//}