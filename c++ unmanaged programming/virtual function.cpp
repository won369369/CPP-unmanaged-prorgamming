//class Base {
//public:
//    virtual void show() { std::cout << "In Base\n"; }
//};
//
//class Derived : public Base {
//public:
//    void show() { std::cout << "In Derived\n"; }
//};
//
//int main(void) {
//    Base* baseptr;
//    Derived d;
//    baseptr = &d;
//
//    //virtual function, binded at runtime (Runtime polymorphism)
//    baseptr->show();
//
//    return 0;
//}
