#include <iostream>

long long r, s, t, ans = 0, res = 0;

int main() {
    // Lee tres números enteros largos desde la entrada estándar
    std::cin >> r >> s >> t;

    if (t > r * s) {
        ans = r * s;
        res = t - ans;
    } else {
        ans = t;
    }

    // Imprime los resultados
    std::cout << ans << " " << res << std::endl;

    return 0;
}