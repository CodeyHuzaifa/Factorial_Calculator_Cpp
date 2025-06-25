#include <iostream>

int main() {
    int number;
    unsigned long long factorial = 1;

    std::cout << "Enter a positive number: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers.\n";
    }
    else {
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        std::cout << "Factorial of " << number << " = " << factorial << '\n';
    }

    return 0;
}
