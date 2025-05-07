#include <iostream>

long long a, b, c;

int main() {
    // Lee tres números enteros largos desde la entrada estándar
    std::cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            std::cout << "Equilateral";
        } else if (a == b || b == c || a == c) {
            std::cout << "Isosceles";
        } else {
            std::cout << "Scalene";
        }
    } else {
        std::cout << "Invalid";
    }

    return 0;
}