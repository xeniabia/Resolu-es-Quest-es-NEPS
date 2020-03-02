#include <bits/stdc++.h>

using namespace std;


int main (){
	int n, x, y, z;
	cin >> n >> x >> y >>z;
	if(x+y+z<=n){
		cout << "3\n";
		return 0;
	}else if(x+y<=n || x+z<=n || y+z<=n){
		cout << "2\n";
		return 0;
	}else if(x<=n || y<=n || z<=n){
		cout << "1\n";
		return 0;
	}else{
		cout << "0\n";
		return 0;
	}
return 0;
}