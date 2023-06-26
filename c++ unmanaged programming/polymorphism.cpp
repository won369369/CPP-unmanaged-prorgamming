//#include <iostream>
//
//class Shape {
//public:
//	virtual void draw() = 0;
//};
//
//class Circle : public Shape {
//public: 
//	void draw() {
//		std::cout << "Circle" << std::endl; 
//	}
//};
//
//class Rectangle : public Shape {
//public:
//	void draw() {
//		std::cout << "Rectangle" << std::endl;
//	}
//};
//
//int main() {
//	Shape* shape; 
//
//	shape = new Circle(); 
//	shape->draw(); 
//
//	shape = new Rectangle(); 
//	shape->draw(); 
//
//	delete shape; 
//	shape = nullptr; 
//
//	return 0;
//}