#include <iostream>

int n;

int main() {
    // Lee un entero del usuario
    std::cin >> n;

    // Imprime el último dígito del entero de entrada
    std::cout << n % 10;

    return 0;
}