#include <iostream>

using namespace std;

int main(){
	int r0, r1;
	cin >> r0;
	cin >> r1;

	for ( int n = r0; n < r1 + 1; n++ ){
		if (n % 2 == 0){
			cout << n << endl;
		}

	}


	return 0;
}