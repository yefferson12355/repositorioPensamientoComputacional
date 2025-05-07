#include <iostream>

using namespace std;

int main(){
  int r0, r1, r2;
  
  cin >> r2;
  
  r0 = r2;
  r1 = r2;
  
  
  for ( int n = 0; n < 2; n++ ){
    cin >> r2;
    
    
    if ( r2 < r0 ){
      r0 = r2;
    }
    
    if ( r2 > r1){
      r1 = r2;
    }
    
    
  }
  
  
  cout << r0 << ' ' << r1;
  
  
  return 0;
}