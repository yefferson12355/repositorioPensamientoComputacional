#include <iostream>

long long d, h, m;

void solve(long long d, long long h, long long m) {
    h = h * 60 + m;

    if (d == 1) {
        if (h >= 420 && h <= 1140) {
            std::cout << "abierto\n";
        } else {
            std::cout << "cerrado\n";
        }
    } else if (d == 2) {
        if ((h >= 480 && h <= 840) || (h >= 960 && h <= 1200)) {
            std::cout << "abierto\n";
        } else {
            std::cout << "cerrado\n";
        }
    } else if (d == 3) {
        if ((h >= 420 && h <= 780) || (h >= 900 && h <= 1140)) {
            std::cout << "abierto\n";
        } else {
            std::cout << "cerrado\n";
        }
    } else if (d == 4) {
        if ((h >= 420 && h <= 540) || (h >= 720 && h <= 960) || (h >= 1020 && h <= 1260)) {
            std::cout << "abierto\n";
        } else {
            std::cout << "cerrado\n";
        }
    } else if (d == 5) {
        if ((h >= 510 && h <= 840) || (h >= 945 && h <= 1110)) {
            std::cout << "abierto\n";
        } else {
            std::cout << "cerrado\n";
        }
    } else if (d == 6) {
        if (h >= 630 && h <= 885) {
            std::cout << "abierto\n";
        } else {
            std::cout << "cerrado\n";
        }
    } else if (d == 7) {
        std::cout << "cerrado\n";
    }
}

int main() {
    std::cin >> d >> h >> m;
    solve(d, h, m);
    return 0;
}