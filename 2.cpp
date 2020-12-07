#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
	unsigned n;
	cin >> n;
	
	unsigned ostatak=n%10000;
	unsigned prvi_deo=n/10000;
	for(int i=0; i<4; i++){
		int x=ostatak%10;
		ostatak/=10;
		prvi_deo=prvi_deo*10+x;
	}
	
	cout << prvi_deo;
	
	
	
	return 0;
}
