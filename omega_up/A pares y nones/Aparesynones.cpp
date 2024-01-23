#include <iostream>

int solve(int n) {
    int par = 0, impar = 0, it = 0, x;
    for (int i = 0; i < n; ++i) {
        std::cin >> x;
        if (x & 1)
            impar += x;
        else
            par += x, it++;
    }
    if (par / it > impar / (n - it))
        std::cout << "APARICIO\n";
    else if (par / it < impar / (n - it))
        std::cout << "NONILA\n";
    else
        std::cout << "EMPATE!\n";
    return 0;  // Añadí un valor de retorno para que coincida con la firma de la función
}

int main() {
    int n;
    std::cin >> n;
    solve(n);

    return 0;
}