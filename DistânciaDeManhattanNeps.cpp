#include <bits/stdc++.h>

using namespace std;

int main () {
	int xm, ym, xr, yr;
	cin >> xm >> ym >> xr >> yr;
	int x, y;
	//int resp;
	if(xm>=xr){
		x = xm-xr;
	}else{
		x = xr-xm;
	}
	if(ym>=yr){
		y = ym-yr;
	}else{
		y = yr-ym;
	}
	printf("%d\n", x+y);
}