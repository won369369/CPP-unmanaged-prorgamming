//class Box {
//private:
//    int length;
//
//public:
//    Box() : length(0) {}
//
//    // friend function declaration
//    friend int printLength(Box);
//};
//
//// friend function definition
//int printLength(Box b) {
//    // Since printLength() is a friend of Box, it can directly access any member of this class
//    return b.length;
//}
//
//int main() {
//    Box box;
//    cout << "Length of box : " << printLength(box) << endl;
//    return 0;
//}
