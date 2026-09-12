#include <iostream>

bool isEven(int number) {
    return number % 2 == 0;
}

int main() {
    int num = 4;
    if (isEven(num)) {
        std::cout << num << " — четное число." << std::endl;
    } else {
        std::cout << num << " — нечетное число." << std::endl;
    }
    return 0;
}