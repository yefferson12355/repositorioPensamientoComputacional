#include <iostream>

int n;

int main() {
    // Lee un entero desde la entrada estándar
    std::cin >> n;

    while (n != 0) {
        // Imprime el valor de n y luego decrementa n
        std::cout << n << "\n";
        n--;
    }

    return 0;
}
