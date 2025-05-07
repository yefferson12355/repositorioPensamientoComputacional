#include <iostream>

int h, m;

int main() {
    while (std::cin >> h >> m) {
        h = (h * 60) + m;
        if ((h >= 420 && h <= 525) || (h >= 615 && h <= 690) || (h >= 810 && h <= 1165) || (h >= 1185 && h <= 1320)) {
            std::cout << "a salvo\n";
        } else {
            std::cout << "atrapado\n";
        }
    }

    return 0;
}