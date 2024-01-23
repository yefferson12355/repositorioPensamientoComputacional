#include <iostream>
#include <vector>

int main() {
    std::vector<bool> x(1000000, false);
    int a, g;

    // Lee un entero desde la entrada estándar
    std::cin >> a;

    for (int i = 0; i < a * a; ++i) {
        // Lee otro entero desde la entrada estándar
        std::cin >> g;
        x[g] = true;
    }

    // Lee otro entero desde la entrada estándar
    std::cin >> a;

    while (a--) {
        // Lee otro entero desde la entrada estándar
        std::cin >> g;
        if (x[g] == true) {
            std::cout << "SI\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}