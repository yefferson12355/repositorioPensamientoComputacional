#include <bits/stdc++.h>
using namespace std;

int main()
{

    int dato,n;
    double suma;
    suma=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>dato;
        suma+=dato;
    }
    cout<<fixed<<setprecision(2)<<suma/n;

    return 0;
}
