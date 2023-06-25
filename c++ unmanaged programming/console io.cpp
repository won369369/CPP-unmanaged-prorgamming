#include <iostream>
#include <string>

int main() {
    std::string input;

    std::cout << "Please enter some text: ";
    std::getline(std::cin, input);

    std::cout << "You entered: " << input << std::endl;

    return 0;
}
