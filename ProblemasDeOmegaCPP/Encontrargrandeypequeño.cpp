#include <iostream>

using namespace std;

int main(){
	int r0, r1, r2, r3;

	cin >> r0;

	cin >> r1;

	r2 = r1;
	r3 = r1;

	for ( int n = 0; n < r0 - 1; n++ ){
		cin >> r1;

		if ( r1 < r2 ){
			r2 = r1;
		}

		if ( r1 > r3){
			r3 = r1;
		}
	}

	cout << "El elemento mas grande es el " << r3 << " y el mas chico es " << r2;


	return 0;
}