#include <iostream>
#include <string>

int main() {
    char n[100];
    int e;

    // Lee una cadena y un entero desde la entrada estándar
    std::cin >> n >> e;

    // Imprime "si" si el entero es mayor que 17, de lo contrario, imprime "no"
    std::cout << (e > 17 ? "si" : "no");

    return 0;
}