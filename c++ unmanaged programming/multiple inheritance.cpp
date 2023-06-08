//class Base1 {
//public:
//    void func1() { cout << "Function of Base1 \n"; }
//};
//
//class Base2 {
//public:
//    void func2() { cout << "Function of Base2 \n"; }
//};
//
//class Derived : public Base1, public Base2 {
//public:
//    void funcDerived() { cout << "Function of Derived \n"; }
//};
//
//int main() {
//    Derived d;
//    d.func1(); // Function of Base1
//    d.func2(); // Function of Base2
//    d.funcDerived(); // Function of Derived
//    return 0;
//}
//
//class Base {
//public:
//    void func() { cout << "Function of Base \n"; }
//};
//
//class B1 : virtual public Base {};
//
//class B2 : virtual public Base {};
//
//class Derived : public B1, public B2 {};
//
//int main() {
//    Derived d;
//    d.func(); // Function of Base
//    return 0;
//}
