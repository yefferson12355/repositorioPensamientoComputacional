#include <iostream>

int main() {
    long long n, k;
    std::cin >> n >> k;
    std::cout << n * (n - 1) / 2 * k;

    return 0;
}
