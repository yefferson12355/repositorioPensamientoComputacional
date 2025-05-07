#include <iostream>

int main() {
    int n;
    int a[200000] = {0}; // Inicializa el arreglo a 0
    int index, temp, aux;

    for (int num = 0; num < 101; ++num) {
        std::cout << num << "! = ";
        aux = num;
        a[0] = 1;
        index = 0;

        for (; aux >= 2; --aux) {
            temp = 0;

            for (int i = 0; i <= index; ++i) {
                temp = (a[i] * aux) + temp;
                a[i] = temp % 10;
                temp /= 10;
            }

            while (temp > 0) {
                a[++index] = temp % 10;
                temp /= 10;
            }
        }

        for (int i = index; i >= 0; --i) {
            std::cout << a[i];
        }

        std::cout << "\n";
    }

    return 0;
}
