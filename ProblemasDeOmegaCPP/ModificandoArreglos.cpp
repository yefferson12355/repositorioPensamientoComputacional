#include <iostream>

using namespace std;

int main() {
	int r0, r1, r3;


	cin >> r0;
	cin >> r1;

	int r2[r0] = {0};
	

	for ( int n = 0; n < r1; n++ ){
		cin >> r3;
		r2[r3] = r2[r3] + 1;

	}



	for ( int n = 0; n < r0; n ++ ){
		cout << r2[n] << ' ';


	}


	return 0;
}