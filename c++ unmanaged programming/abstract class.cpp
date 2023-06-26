//#include <iostream>
//
//class Shape {
//public: 
//	virtual int getArea() = 0; 
//
//	void setWidth(int w) {
//		width = w; 
//	}
//
//	void setHeight(int h) {
//		height = h;
//	}
//protected:
//	int width, height; 
//};
//
//class Rectangle : public Shape {
//public: 
//	int getArea() override {
//		return width * height;
//	}
//};
//
//class Triangle : public Shape {
//public:
//	int getArea() override {
//		return (width * height) / 2;
//	}
//};
//
//int main() {
//	Rectangle rect; 
//	Triangle tri; 
//
//	rect.setHeight(2);
//	rect.setWidth(3);
//	int a = rect.getArea();
//
//	tri.setHeight(2); 
//	tri.setWidth(3);
//	int b = tri.getArea(); 
//
//	return 0;
//}