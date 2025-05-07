#include <iostream>
#include <cctype>
#include <algorithm>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
string a;
long long y=0,z=0,cases,x;
int main(){
    optimizar_io
    //para optimizar las entradas y salidas 
    cin>>cases>>a;
    while(cases--){
        cin>>x;
        if(x==1)y++;
        if(x==0)z++;
    }
    if(y%2!=0)for(int i=0;i<(int)a.size();++i){
        //size() funcion para devolver el tamaño
            if(isalpha(a[i])){
                //isalpha () devuelve un valor booleano  true o 
                //false si el caracter es una letra o no
                if(isupper(a[i]))a[i]=tolower(a[i]);
                else a[i]=toupper(a[i]);
            }
    }
    if(z%2!=0)reverse(a.begin(),a.end());
    cout<<a<<"\n";
}