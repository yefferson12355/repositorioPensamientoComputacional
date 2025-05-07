#include <iostream>

int main() {
    int a, b;

    // Lee dos enteros desde la entrada estándar
    std::cin >> a >> b;

    // Calcula los resultados
    b %= 3;
    int result1 = (a - b <= 0) ? (a - b + 3) : (a - b);
    int result2 = (a + b > 3) ? ((a + b) % 3) : (a + b);

    // Imprime los resultados
    std::cout << result1 << " " << result2;

    return 0;
}
