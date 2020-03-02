#include <bits/stdc++.h>

using namespace std;

int main (){
	int a , b, c;
	cin >> a >> b >> c;
	int t1=a+c, t2=2*a+b, t3=2*c+b;
	if(t1<=t2 && t1<=t3){
		cout << 2*t1 << endl;
		return 0;
	}else if(t2<=t1 && t2<=t3){
		cout << 2*t2 << endl;
		return 0;
	}else{
		cout << 2*t3 << endl;
		return 0;
	}
}