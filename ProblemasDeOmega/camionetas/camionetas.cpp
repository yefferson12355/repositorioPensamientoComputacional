#include <iostream>

int n;

int main() {
    // Lee un entero desde la entrada estándar
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        std::cout << i - 1 << " " << i + 1 << " " << i + 2 << " ";
    }

    return 0;
}