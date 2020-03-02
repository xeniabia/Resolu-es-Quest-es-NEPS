#include <bits/stdc++.h>

using namespace std;


int main (){
	int a, b, c;
	cin >> a >> b >> c;
	if(a==b){
		cout << c << "\n";
		return 0;
	}else if(a==c){
		cout << b << "\n";
		return 0;
	}else{
		cout << a << "\n";
		return 0;
	}
	return 0;
}
