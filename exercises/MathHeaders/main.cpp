#include "math.h"
#include <iostream>

int main() {
    std::cout << "Input two integers: ";

    int x{}, y{};
    std::cin >> x >> y;

    std::cout << "Sum: " << add(x, y) << '\n';
    std::cout << "Difference: " << subtract(x, y) << '\n';
    std::cout << "Product: " << multiply(x, y) << '\n';

    return 0;
}
