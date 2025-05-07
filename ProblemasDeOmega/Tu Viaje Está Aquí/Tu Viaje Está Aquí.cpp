#include <iostream>
#include <cstring>

int main() {
    long long cont = 1, conti = 1;
    char a[72], b[72];

    // Lee dos cadenas desde la entrada estándar
    std::cin >> a >> b;

    for (int i = 0; i < std::strlen(a); ++i) {
        cont = (cont * (a[i] - 64)) % 47;
    }

    for (int i = 0; i < std::strlen(b); ++i) {
        conti = (conti * (b[i] - 64)) % 47;
    }

    // Imprime "GO" si cont y conti son iguales, de lo contrario, imprime "STAY"
    std::cout << (cont == conti ? "GO" : "STAY");

    return 0;
}
