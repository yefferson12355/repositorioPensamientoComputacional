#include <bits/stdc++.h>
using namespace std;
struct nodo{
    int r;
    int c;
    int Ntrampas;
    const bool operator<(const nodo &otro)const{
        return Ntrampas>otro.Ntrampas;
    }
};
int mov[4][2]={{0,1},
               {1,0},
               {0,-1},
               {-1,0}};
char mapa[302][302];
int visitados[302][302];
priority_queue<nodo>cola;
int main()
{
    int N,M;
    int ri,ci;
    nodo actual, nuevo;
    cin>>N>>M;
    cin>>ri>>ci;
    for(int i=1;i<=N;i++){
        for(int j=1; j <= M; j++){
            cin >> mapa[i][j];
        }
    }
    if(mapa[ri][ci]=='x'){
        cola.push({ri,ci,1});
    }else{
        cola.push({ri,ci,0});
    }
    visitados[ri][ci]=1;
    while(!cola.empty()){
        actual=cola.top();cola.pop();
        if(mapa[actual.r][actual.c]=='S'){
            cout << actual.Ntrampas << "\n";
            break;
        }
        for(int a=0;a<4;a++){
            nuevo=actual;
            nuevo.r+=mov[a][0];
            nuevo.c+=mov[a][1];
            if(mapa[nuevo.r][nuevo.c]!='#'){
                if(nuevo.r>=1 and nuevo.r<=N and
                   nuevo.c>=1 and nuevo.c<=M){
                    ///Cordenada valida
                    if(visitados[nuevo.r][nuevo.c]==0){
                        if(mapa[nuevo.r][nuevo.c]=='x'){
                            nuevo.Ntrampas++;
                        }
                        cola.push(nuevo);
                        visitados[nuevo.r][nuevo.c]=1;
                    }
                }

            }
        }

    }
    return 0;
}