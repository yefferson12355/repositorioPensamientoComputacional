#include <iostream>

int d, m;

void solve() {
    if (m == 3 && d >= 21 || (m >= 4 && m <= 5) || (m == 6 && d < 21)) {
        if (m == 3 && d >= 21 || (m == 4 && d <= 19)) {
            std::cout << "Aries\n";
        } else if (m == 4 && d >= 20 || (m == 5 && d <= 20)) {
            std::cout << "Tauro\n";
        } else {
            std::cout << "Geminis\n";
        }
        std::cout << "Primavera\n";
    } else if (m == 6 && d >= 21 || (m >= 7 && m <= 8) || (m == 9 && d < 21)) {
        if (m == 6 && d >= 21 || (m == 7 && d <= 22)) {
            std::cout << "Cancer\n";
        } else if (m == 7 && d >= 23 || (m == 8 && d <= 22)) {
            std::cout << "Leo\n";
        } else {
            std::cout << "Virgo\n";
        }
        std::cout << "Verano\n";
    } else if (m == 9 && d >= 21 || (m >= 10 && m <= 11) || (m == 12 && d < 21)) {
        if (m == 9 && (d == 21 || d == 22)) {
            std::cout << "Virgo\n";
        } else if (m == 9 && d >= 23 || (m == 10 && d <= 22)) {
            std::cout << "Libra\n";
        } else if (m == 10 && d >= 23 || (m == 11 && d <= 21)) {
            std::cout << "Escorpion\n";
        } else {
            std::cout << "Sagitario\n";
        }
        std::cout << "Otono\n";
    } else {
        if (m == 12 && d == 21) {
            std::cout << "Sagitario\n";
        } else if (m == 12 && d >= 22 || (m == 1 && d <= 19)) {
            std::cout << "Capricornio\n";
        } else if (m == 1 && d >= 20 || (m == 2 && d <= 18)) {
            std::cout << "Acuario\n";
        } else {
            std::cout << "Piscis\n";
        }
        std::cout << "Invierno\n";
    }
}

int main() {
    std::cin >> d >> m;
    solve();
    return 0;
}
