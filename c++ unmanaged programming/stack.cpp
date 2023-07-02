//#include <iostream>
//#include <vector>
//
//class Stack {
//private:
//	std::vector<int> elements;
//
//public:
//	void push(int data) {
//		elements.push_back(data); 
//	}
//	void pop() {
//		if (elements.empty()) {
//			return;
//		}
//		elements.pop_back();
//	}
//
//	int top() {
//		if (elements.empty()) {
//			return -1;
//		}
//		return elements.back();
//	}
//
//	bool isEmpty() {
//		return elements.empty();
//	}
//
//	void printStack() {
//		for (auto i = elements.rbegin(); i != elements.rend(); ++i) {
//			int a = *i;
//		}
//	}
//};
//
//int main() {
//	Stack s; 
//	s.push(1);
//	s.push(2);
//	s.push(3);
//
//	s.top();
//	s.pop(); 
//	s.printStack();
//	return 0;
//}