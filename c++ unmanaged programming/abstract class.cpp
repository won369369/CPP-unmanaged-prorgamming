//class AbstractClass {
//public:
//    void regularFunction() {
//        std::cout << "This is a regular function in the abstract class.\n";
//    }
//
//    virtual void pureVirtualFunction() = 0;
//};
//
//class ConcreteClass : public AbstractClass {
//public:
//    void pureVirtualFunction() override {
//        std::cout << "ConcreteClass's implementation of pureVirtualFunction().\n";
//    }
//};
//
//int main() {
//    ConcreteClass obj;
//    obj.pureVirtualFunction();  // Prints: ConcreteClass's implementation of pureVirtualFunction().
//    obj.regularFunction();  // Prints: This is a regular function in the abstract class.
//
//    return 0;
//}
