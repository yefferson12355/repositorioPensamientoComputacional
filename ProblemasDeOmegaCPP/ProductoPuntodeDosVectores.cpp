#include <stdio.h>

int main(){
  int r0, r1, r4 = 0; //ArrayLong ValueStore FinalValue

  scanf ( "%d", &r0 );

  int r2[r0], r3[r0]; //ArrayA ArrayB


  for ( int n = 0; n < r0; n++ ){
    scanf ( "%d", &r1 );
    r2[n] = r1;

  }


  for ( int n = 0; n < r0; n++ ){
    scanf ( "%d", &r1 );
    r3[n] = r1;

  }


  for ( int n = 0; n < r0; n++){
    r4 += + ( r2[n] * r3[n] );

  }

  printf ( "%d", r4 );



  return 0;
}