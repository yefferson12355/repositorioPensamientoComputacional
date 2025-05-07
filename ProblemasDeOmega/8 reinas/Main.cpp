#include <iostream>
using namespace std;
#define LADO_TABLERO 8
int N;
//es un bool que retorna true o false segun yo

bool tablero[10][10];


void Lectura(){
    int f,c;
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>f>>c;
        tablero[f][c]=true;
    }
}

void MostrarReinas(){
    for(int i=1;i<=LADO_TABLERO;i++){
        for(int j=1;j<=LADO_TABLERO;j++){
            if(tablero[i][j]) cout<<i<<" "<<j<<'\n';
        }
    }
}

bool EstablecidoFila(int c){
    for(int i=1;i<=LADO_TABLERO;i++){
        if(tablero[i][c]) return true;
    }
    return false;
}

bool ReinaAtaca(int f,int c,int aF,int aC){
    int fila=f+aF,columna=c+aC;
    while(fila<=LADO_TABLERO and columna<=LADO_TABLERO and fila>=1 and columna>=1){
        if(tablero[fila][columna]) return true;
        fila+=aF;
        columna+=aC;
    }
    return false;
}

bool Solucion(int c){
    if(c>LADO_TABLERO) return true;
    if(EstablecidoFila(c)) return Solucion(c+1);
    for(int i=1;i<=LADO_TABLERO;i++){
        tablero[i][c]=true;
        if(!ReinaAtaca(i, c, 0, 1) and !ReinaAtaca(i, c, 0, -1) and 
        !ReinaAtaca(i, c, 1, 0) and !ReinaAtaca(i, c, -1, 0) and
        !ReinaAtaca(i, c, 1, 1) and !ReinaAtaca(i, c, -1, -1) and
        !ReinaAtaca(i, c, -1, 1) and !ReinaAtaca(i, c, 1, -1))
            if(Solucion(c+1)) return true;
        tablero[i][c]=false;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    Lectura();
    if(Solucion(1)) MostrarReinas();
    else cout<<0<<'\n';

    return 0;
}
/// xD