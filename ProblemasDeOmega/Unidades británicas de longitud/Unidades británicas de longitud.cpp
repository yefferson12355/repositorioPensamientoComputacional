#include <iostream>

int main() {
    long long n, m = 0, f = 0, y = 0, p = 0, q = 0;

    // Lee un número largo desde la entrada estándar
    std::cin >> n;

    m = n / 63360;
    n -= (m * 63360);

    f = n / 7920;
    n -= (f * 7920);

    y = n / 36;
    n -= (y * 36);

    p = n / 12;
    n -= (p * 12);

    q = n;

    // Imprime los resultados
    std::cout << m << " " << f << " " << y << " " << p << " " << q;

    return 0;
}
