#include <iostream>
#include <string>

int main() {
    int a;
    std::cin >> a;

    char b[a];
    std::cin >> b;

    if (a > 10)
        std::cout << b[0] << a - 2 << b[a - 1] << std::endl;
    else
        std::cout << b << std::endl;

    return 0;
}