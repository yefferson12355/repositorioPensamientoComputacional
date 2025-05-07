#include <iostream>

using namespace std;

int main(){
	int r0 = 0, r1;
	bool r2 = true;

	while ( r2 = true ){
		cin >> r1;

		if ( r1 < 0 ){
			r1 = r1 * -1;
		}
		else if ( r1 = 0 ){
			r2 = false;
		}

		r0 += r1;
	}

	cout << r1;


	return 0;
}