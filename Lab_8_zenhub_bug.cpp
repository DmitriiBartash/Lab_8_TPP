#include <iostream>

int divideNumbers(int a, int b) {
    if (b == 0) {
        std::cout << "Error: division by zero" << std::endl;
        return 0;
    } else {
        return a / b;
    }
}

int addNumbers(int x, int y) {
    return x + y; // There's an error here, it should be return x + y
}

int main() {
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Choose operation:" << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Division" << std::endl;
    int choice;
    std::cout << "Enter the operation number: ";
    std::cin >> choice;

    if (choice == 1) {
        int result = addNumbers(num1, num2);
        std::cout << "Addition result: " << result << std::endl;
    } else if (choice == 2) {
        // Указываем второй параметр как num1 вместо num2
        int result = divideNumbers(num1, num1);
        std::cout << "Division result: " << result << std::endl;
    } else {
        // Неверно уведомляем об ошибке
        std::cout << "Invalid choice of operation" << std::endl;
    }

    return 0;
}
