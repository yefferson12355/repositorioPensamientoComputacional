#include <iostream>

int main() {
    long long a, b, c, aux;
    std::cin >> a >> b >> c;

    if (a > b)
        std::swap(a, b);
    if (b > c)
        std::swap(b, c);
    if (a > b)
        std::swap(a, b);

    if (a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && c + a > b) {
        if (a == b && a == c)
            std::cout << "1 0\n";
        else if (a == b || b == c || a == c)
            std::cout << "2 0\n";
        else
            std::cout << "3 0\n";
    } else {
        for (long long i = 1;; ++i) {
            a++, b++, c++;
            if (a + b > c && b + c > a && c + a > b) {
                std::cout << "0 " << i << "\n";
                break;
            }
        }
    }

    return 0;
}
