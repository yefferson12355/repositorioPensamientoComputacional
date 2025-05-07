#include <iostream>

int main(){
  int r0, r1, r2;
  
  std::cin >> r0;
  std::cin >> r1;
  std::cin >> r2;
  
  if ( r0 == r1 || r0 == r2 || r1 == r2 ){
    std::cout << "Si";
    
  }
  else{
    std::cout << "No";
    
  }
  
  
  return 0;
}