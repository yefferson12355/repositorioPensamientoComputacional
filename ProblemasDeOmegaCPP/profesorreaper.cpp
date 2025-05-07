#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int r0;
	float r1 = 0;


	for ( int n = 0; n < 5; n++ ){
		cin >> r0;


		r1 += r0;

	}


	printf ( "%.2f", r1 / 5 );


	return 0;
}