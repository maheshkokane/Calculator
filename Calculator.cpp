#include <iostream>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero is not allowed." << std::endl;
        return 0.0f;
    }
    return static_cast<float>(a) / b;
}

int main() {
    char operation;
    int num1, num2;

    while (true) {
        std::cout << "Enter operation (+, -, *, /) or 'q' to quit: ";
        std::cin >> operation;

        if (operation == 'q') {
            std::cout << "Exiting calculator." << std::endl;
            break;
        }

        std::cout << "Enter two numbers: ";
        std::cin >> num1 >> num2;

        switch (operation) {
            case '+':
                std::cout << "Result: " << add(num1, num2) << std::endl;
                break;
            case '-':
                std::cout << "Result: " << subtract(num1, num2) << std::endl;
                break;
            case '*':
                std::cout << "Result: " << multiply(num1, num2) << std::endl;
                break;
            case '/':
                std::cout << "Result: " << divide(num1, num2) << std::endl;
                break;
            default:
                std::cerr << "Invalid operation. Please try again." << std::endl;
        }
    }

    return 0;
}