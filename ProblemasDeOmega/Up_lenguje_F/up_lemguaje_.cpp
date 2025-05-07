#include <iostream>
#include <cstring>

int main() {
    char a[1000000];

    // Lee una cadena desde la entrada estándar
    std::cin >> a;

    for (int i = 0; i < std::strlen(a); ++i) {
        std::cout << a[i];

        if (a[i] == 'a') {
            std::cout << "fa";
        } else if (a[i] == 'e') {
            std::cout << "fe";
        } else if (a[i] == 'i') {
            std::cout << "fi";
        } else if (a[i] == 'o') {
            std::cout << "fo";
        } else if (a[i] == 'u') {
            std::cout << "fu";
        }
    }

    return 0;
}
