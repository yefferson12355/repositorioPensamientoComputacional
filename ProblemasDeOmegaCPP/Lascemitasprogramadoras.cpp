#include <iostream>

using namespace std;

int main(){
	int r0, r1;

	cin >> r0;
	cin >> r1;

	if ( r0 < r1 ){
		cout << "Dejalo ya esta muerto\n" << (r0 - r1) * -1;
	}
	else{
		cout << "El negocio si va a jalar\n" << r0 - r1;
	}



	return 0;
}