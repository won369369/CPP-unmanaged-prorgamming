//#include <iostream>
//
//class Rectangle; 
//
//class Square {
//private: 
//	int side; 
//public: 
//	Square(int a) : side(a) {}
//
//	friend int area(Square s, Rectangle r);
//};
//
//class Rectangle {
//private:
//	int height;
//	int width;
//public: 
//	Rectangle(int h = 0, int w = 0) : height(h), width(w) {}
//
//	friend int area(Square s, Rectangle r);
//};
//
//int area(Square s, Rectangle r) {
//	int s_area = s.side * s.side; 
//	int r_area = r.height * r.width;
//	return s_area + r_area; 
//}
//
//int main() {
//	Square s(4); 
//	Rectangle r(5, 6); 
//	int a = area(s, r); 
//	return 0;
//}