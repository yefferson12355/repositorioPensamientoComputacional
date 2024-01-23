#include <iostream>
#include <cstring>
#include <cctype>

int main() {
    char a[1000];
    std::cin.getline(a, 1000);

    for (int i = 0; i < std::strlen(a); ++i) {
        if (std::isupper(a[i])) {
            std::cout << char(((a[i] - 'A' + 13) % 26) + 'A');
        } else if (std::islower(a[i])) {
            std::cout << char(((a[i] - 'a' + 13) % 26) + 'a');
        } else {
            std::cout << a[i];
        }
    }

    return 0;
}
