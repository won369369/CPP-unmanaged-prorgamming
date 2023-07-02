//#include <type_traits>
//
//template <typename T> 
//void process(T t) {
//	static_assert(std::is_integral<T>::value, "process function requires an integral type.");
//}
//int main() {
//	int x = 0; 
//	double y = 3.14; 
//
//	process(x); 
//	//process(y); //This will produce compile-time error. 
//	return 0;
//}