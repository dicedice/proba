#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
	int dp, dpp, n;
	cin >> n;
	
	dp=dpp=1;
	for(int i=2; i<n; i++){
		int x=dp;
		dp=dpp+dp;
		dpp=x;
	}
	
	cout << dp << endl;
	
	return 0;
}
