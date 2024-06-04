#include <iostream>

using namespace std;

int main(){
	int L, E, R;
	
	cin >> L;
	cin >> E;
	
	
	R = L + E;
	
	if(R%2 == 0){
		cout << 1;
	}
	else{
		cout << 0;
	}
	return 0;
}
