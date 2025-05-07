#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n, aux = 0;
    std::cin >> n;

    std::vector<int> v(n), l(n), p;

    for (int i = 0; i < n; ++i)
        std::cin >> v[i];

    for (int i = 0; i < n; ++i)
        std::cin >> l[i];

    std::sort(v.begin(), v.end());
    std::sort(l.begin(), l.end(), std::greater<int>());

    for (int i = n - 1; i >= 0; --i) {
        aux = v[i] + l[i] + aux;
        if (aux >= 10) {
            p.push_back(aux - 10);
            aux = 1;
        } else {
            p.push_back(aux);
            aux = 0;
        }
    }

    if (aux > 0)
        p.push_back(aux);

    for (int i = p.size() - 1; i >= 0; --i)
        std::cout << p[i];

    std::cout << "\n";

    return 0;
}
