#include <iostream>

int main() {
    int n, a, b, cont = 0, x;

    std::cin >> n >> a >> b;

    while (n--) {
        std::cin >> x;
        if (x > a && x < b) {
            cont++;
        }
    }

    std::cout << cont;

    return 0;
}
