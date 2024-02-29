#include <iostream>

double calculate(double num1, double num2, char op) {
    switch(op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return num1 / num2;
        case '%':
            return fmod(num1, num2);
        default:
            return 0.0;
    }
}

int main() {
    double num1, num2, result;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operator (+, -, *, /, %): ";
    std::cin >> op;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    result = calculate(num1, num2, op);

    std::cout << "Result: " << num1 << " " << op << " " << num2 << " = " << result << std::endl;

    return 0;
}
