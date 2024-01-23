#include <iostream>

int a, b;

int main() {
    while (std::cin >> a >> b) {
        if ((a == b) || (a > 1000 && b > 1000) || (a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0))
            break;
        
        std::cout << "TODAVÍA NO" << std::endl;
    }

    std::cout << "YA" << std::endl;

    return 0;
}