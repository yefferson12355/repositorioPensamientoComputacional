#include <iostream>
#include <cstring>

int main() {
    char a[1000000], b[1];

    // Lee dos cadenas desde la entrada estándar
    std::cin >> a >> b;

    for (int i = 0; i < std::strlen(a); ++i) {
        if (a[i] != b[0]) {
            std::cout << a[i];
        }
    }

    return 0;
}