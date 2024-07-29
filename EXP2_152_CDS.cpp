#include <iostream>

int main() {
    int num1, num2;
    int sum, difference, product, quotient;

    
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    
    
    if (num2 != 0) {
        quotient = num1 / num2;
    } else {
        std::cout << "Error: Division by zero!" << std::endl;
        return 1;
    }

    
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;

    return 0;
}
