#include <iostream>

using namespace std;

int chapas[100000][2];

int main(void)
{
    int i;
    int aux;
    int numLlaves;
    int numChapas;
    cin >> numChapas;
    for (i = 1; i <= numChapas; i++) {
        cin >> aux;
        chapas[aux][0] = aux;
        chapas[aux][1] = i;
    }
    cin >> numLlaves;
    for (i = 0; i < numLlaves; i++) {
        cin >> aux;
        if(aux == chapas[aux][0]){
            cout << chapas[aux][1] << " ";
        }
        else{
            cout << "0 ";
        }
    }
    cout << endl;
}
