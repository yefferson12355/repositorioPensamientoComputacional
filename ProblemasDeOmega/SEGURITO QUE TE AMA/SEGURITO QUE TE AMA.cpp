#include <iostream>

int main() {
    int n;
    long long sum = 0, x;

    std::cin >> n;

    while (n--) {
        std::cin >> x;
        sum += x;
    }

    std::cout << sum << " 0\nNO ME AMA :(\n";

    return 0;
}
