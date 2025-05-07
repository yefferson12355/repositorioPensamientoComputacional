#include <iostream>

using namespace std;

int main(){
	int r0, r1, r2 = 0;

	cin >> r0;
	cin >> r1;


	while ( r0 != r1 ){
		r2++;
		r0++;

		if ( r0 == 24 ){
			r0 = 0;
		}
	}

	cout << r2;

	return 0;
}