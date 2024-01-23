#include <iostream>
#include <vector>

int main() {
    int l, number, x, y = 0, res = 0, it = 0;
    bool ban = false;

    std::cin >> l >> number;
    std::vector<long long> G(l);

    for (int i = 0; i < l; ++i) {
        std::cin >> x;
        y += x;
        G[i] = y;
        if (ban == true)
            res = res < G[i] - G[it - 1] ? G[i] - G[it - 1] : res, it++;
        if (i == number - 1)
            res = G[i], ban = true, it++;
    }

    std::cout << res << std::endl;

    return 0;
}