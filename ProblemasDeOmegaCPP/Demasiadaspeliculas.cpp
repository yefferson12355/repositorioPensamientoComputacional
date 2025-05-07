#include <iostream>

using namespace std;

int main(){
  int r0, r1, r2, r3 = 0;
  cin >> r0;
  cin >> r1;
  
  
  for ( int n = 0; n < r1; n++ ){
    cin >> r2;
    r3 += r2;
  }
  
  
  if ( r1 > r3 ){
    cout << "SI";
  }
  else{
    cout << "NO";
  }
  
  
  
  return 0;
}