#include <iostream>

using namespace std;

int main() {
    // Definir la cantidad de números N
    int NU[30];
    int N;
    int mayor=0;
    cin >> N;
    for (int i=0;i<N;i++)
        {
            cin>>NU[i];
        }
    mayor=NU[0];
    for (int i=0;i<N;i++)
        {
            if (NU[i]>mayor)
                mayor=NU[i];
        }
    cout<<mayor;

    return 0;
}
