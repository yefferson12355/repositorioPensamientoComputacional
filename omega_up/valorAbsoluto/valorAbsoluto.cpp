#include <iostream>
#include <cstdlib>

int main() {
    int a, b;

    // Lee dos enteros desde la entrada estándar
    std::cin >> a >> b;

    // Calcula el valor absoluto de la suma de a y b
    a = abs(a + b);

    // Imprime el resultado
    std::cout << a;

    return 0;
}
