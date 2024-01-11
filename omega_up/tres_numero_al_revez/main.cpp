#include <iostream>

using namespace std;

int main() {
  int n1,n2,n3;
  cin>>n1;
  cin>>n2;
  cin>>n3;
  int aux=0;
  aux=n1;
  n1=n3;
  n3=aux;
  cout<<n1;
  cout<<n2;
  cout<<n3;

  return 0;
}
