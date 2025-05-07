#include <iostream>
#include <cmath>
#include <iomanip>


double a, b, c, s;

int main() {
    // Lee tres números de punto flotante (doubles) desde la entrada estándar
    std::cin >> a >> b >> c;

    // Calcula el semiperímetro
    s = (a + b + c) / 2;

    // Calcula el área usando la fórmula de Herón
    s = std::sqrt(s * (s - a) * (s - b) * (s - c));

    // Imprime los lados y el área con formato
    std::cout << "Side 1: " << std::fixed << std::setprecision(4) << a << std::endl;
    std::cout << "Side 2: " << std::fixed << std::setprecision(4) << b << std::endl;
    std::cout << "Side 3: " << std::fixed << std::setprecision(4) << c << std::endl;
    std::cout << "Area : " << std::fixed << std::setprecision(4) << s << std::endl;

    return 0;
}