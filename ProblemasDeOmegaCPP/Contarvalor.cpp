#include <iostream>

using namespace std;

int main(){
	int r0, r1, r2 = 0, r3;

	cin >> r0;
	cin >> r1;

	for ( int n = 0; n < r0; n++ ){
		cin >> r3;

		if ( r1 == r3 ){
			r2++;
		}

	}


	cout << r2;
	return 0;
}