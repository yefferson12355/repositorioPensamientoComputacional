#include <iostream>

int main() {
    int n, x, conti = 0;

    // Lee un entero desde la entrada estándar
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        // Lee un entero desde la entrada estándar
        std::cin >> x;

        // Incrementa conti si x es impar
        if (x & 1) {
            conti++;
        }
    }

    // Imprime el resultado
    std::cout << n - conti << " " << conti;

    return 0;
}
