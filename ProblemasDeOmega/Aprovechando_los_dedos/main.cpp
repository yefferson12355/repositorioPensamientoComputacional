#include <iostream>
#include <cmath>

using namespace std;

int a[5];
int it = 0, sum = 0;
char b[1];

int main() {
    cin >> b;

    for (int i = 0; i < 5; ++i) {
        cin >> a[i];
    }

    if (b[0] == 'R') {
        for (int i = 0; i < 5; ++i, it++) {
            if (a[i]) {
                sum += pow(2, it);
            }
        }
    } else {
        it = 4;
        for (int i = 0; i < 5; ++i, it--) {
            if (a[i]) {
                sum += pow(2, it);
            }
        }
    }

    cout << sum << "\n";

    return 0;
}
