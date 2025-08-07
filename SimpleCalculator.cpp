#include <iostream>
#include <string>

int main() {
    double num1, num2;
    std::string op;

    while (true) {
        std::cout << "Enter first number: ";
        std::cin >> num1;

        std::cout << "Enter second number: ";
        std::cin >> num2;

        std::cout << "Choose operation (+, -, *, /) or type 'exit' to quit: ";
        std::cin >> op;

        if (op == "exit") {
            std::cout << "Exiting calculator. Goodbye!\n";
            break;
        }

        if (op == "+") {
            std::cout << "Result: " << num1 + num2 << "\n";
        } else if (op == "-") {
            std::cout << "Result: " << num1 - num2 << "\n";
        } else if (op == "*") {
            std::cout << "Result: " << num1 * num2 << "\n";
        } else if (op == "/") {
            if (num2 == 0) {
                std::cout << "Error: Division by zero is not allowed.\n";
            } else {
                std::cout << "Result: " << num1 / num2 << "\n";
            }
        } else {
            std::cout << "Invalid operation.\n";
        }

        std::cout << "\n";
    }

    return 0;
}
