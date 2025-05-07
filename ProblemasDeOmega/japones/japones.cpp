#include <iostream>

int n;

int main() {
    // Lee un entero desde la entrada estándar
    std::cin >> n;

    // Imprime el equivalente en japonés del número ingresado
    switch (n) {
        case 1:
            std::cout << "ichi";
            break;
        case 2:
            std::cout << "ni";
            break;
        case 3:
            std::cout << "zan";
            break;
        case 4:
            std::cout << "yong";
            break;
        case 5:
            std::cout << "go";
            break;
        case 6:
            std::cout << "loku";
            break;
        case 7:
            std::cout << "nana";
            break;
        case 8:
            std::cout << "hatchi";
            break;
        case 9:
            std::cout << "qiu";
            break;
        default:
            std::cout << "yu";
    }

    return 0;
}