#include <iostream>

int multiply(int x, int y) {
    return x * y;
}

int main() {
    std::cout << "Input two integer numbers: ";

    int a{}, b{};
    std::cin >> a >> b;

    std::cout << "Multiply result: " << multiply(a, b) << '\n';

    return 0;
}
