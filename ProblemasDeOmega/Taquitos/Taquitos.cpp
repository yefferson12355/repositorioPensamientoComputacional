#include <iostream>
#include <queue>

int main() {
    int n, x, y, tv = 0;
    std::queue<int> lol;

    std::cin >> n;

    while (n--) {
        std::cin >> x;

        if (x == 1) {
            std::cin >> y;
            lol.push(y);
        }
        if (x == 2 && !lol.empty()) {
            tv += lol.front();
            lol.pop();
        }
        if (x == 3) {
            std::cout << lol.size() << "\n";
        }
        if (x == 4) {
            std::cout << tv << "\n";
        }
    }

    return 0;
}
