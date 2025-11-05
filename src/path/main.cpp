#include <iostream>

int add(int a, int b) {
    int sum = a + b;
    std::cout << "The sum is: " << sum << std::endl;
    return sum;
}

int main() {
    int result = add(1, 2);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
