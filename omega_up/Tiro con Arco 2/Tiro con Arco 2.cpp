#include <iostream>

int main() {
    int n;
    long long cont = 0;
    double x;

    std::cin >> n;

    while (n--) {
        std::cin >> x;

        if (x <= 1)
            cont += 10;
        else if (x <= 2)
            cont += 9;
        else if (x <= 4)
            cont += 8;
        else if (x <= 6)
            cont += 7;
        else if (x <= 9)
            cont += 6;
        else if (x <= 14)
            cont += 5;
        else if (x <= 19)
            cont += 4;
        else if (x <= 25)
            cont += 3;
        else if (x <= 31)
            cont += 2;
        else if (x <= 38)
            cont++;
    }

    std::cout << cont;

    return 0;
}
