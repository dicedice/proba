#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
	int x1,x2,y1,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	
	int a=abs(x2-x1);
	int b=abs(y2-y1);
	
	//cout << sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("%.2f\n",sqrt(a*a+b*b));
	printf("%d\n", 2*a+2*b);
	printf("%d\n", a*b);
	
	
	
	return 0;
}
