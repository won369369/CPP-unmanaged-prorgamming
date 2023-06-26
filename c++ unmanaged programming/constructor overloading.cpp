//#include <iostream>
//
//class Box {
//private: 
//	double width, height, length; 
//public:
//	
//	Box() {
//		width = 0.0; 
//		height = 0.0;
//		length = 0.0;
//	}
//
//	Box(double side) {
//		width = height = length = side; 
//	}
//
//	Box(double width, double height, double length) {
//		this->width = width; 
//		this->height = height;
//		this->length = length;
//	}
//
//	double getVolume() {
//		return width * height * length; 
//	}
//};
//int main() {
//
//	Box cube(5); 
//
//	Box rectangle(2, 3, 4);
//
//	double VolOfCube = cube.getVolume(); 
//	double VolOfRect = rectangle.getVolume(); 
//
//	return 0;
//}