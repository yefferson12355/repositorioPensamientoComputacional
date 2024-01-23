#include <iostream>

int n;

int main() {
    // Lee un entero desde la entrada estándar
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i > 0 && i < n - 1 && j > 0 && j < n - 1) {
                std::cout << " ";
            } else {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }

    return 0;
}