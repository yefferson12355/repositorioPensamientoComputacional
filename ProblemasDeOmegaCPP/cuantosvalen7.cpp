#include <stdio.h>

int main(){
	int r0, r1 = 0;


	for ( int n = 0; n < 2; n++ ){
		scanf ( "%d", &r0 );


		if ( r0 == 7 ){
			r1 ++;

		}

	}


	printf ( "%d", r1 );


	return 0;
}