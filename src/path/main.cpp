#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(1, 2);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
