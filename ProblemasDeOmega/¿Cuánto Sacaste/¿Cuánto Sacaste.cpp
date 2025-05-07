#include <iostream>

int a, b;

int main() {
    // Lee un entero desde la entrada estándar
    std::cin >> a;

    for (int i = 0; i < 3; ++i) {
        // Lee otro entero desde la entrada estándar
        std::cin >> b;

        if (b == a) {
            std::cout << "Te gano en la siguiente\n";
        } else if (b > a) {
            std::cout << "Shh\n";
        } else {
            std::cout << "Soy mejor\n";
        }
    }

    return 0;
}