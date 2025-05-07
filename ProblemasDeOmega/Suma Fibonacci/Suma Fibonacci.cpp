#include <iostream>

int main() {
    long long v[91];
    long long n, sum = 0, aux = 0;

    v[0] = 1, v[1] = 2;

    for (int i = 2; i < 91; ++i) {
        v[i] = v[i - 1] + v[i - 2];
    }

    std::cin >> n;

    for (int i = 90; i >= 0; --i) {
        if (v[i] <= n && aux != v[i] && n - v[i] >= 0) {
            sum++;
            n -= v[i];
            aux = v[i];
        }
    }

    std::cout << sum;

    return 0;
}
