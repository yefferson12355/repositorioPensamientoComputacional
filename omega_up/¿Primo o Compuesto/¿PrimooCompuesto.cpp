#include<iostream>
int n;
void p(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            std::cout << "COMPUESTO";
            return;
        }
    }
    std::cout << "PRIMO";
}

int main() {
    
    // Lee un entero desde la entrada estándar
    std::cin >> n;

    // Llama a la función p con el número leído
    p(n);

    return 0;
}