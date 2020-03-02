#include <bits/stdc++.h>

using namespace std;

int main (){
	int n;
	cin >> n;
	int v1 = 1, v2 = 1;
	int resp;
	if(n==0 || n==1){
		resp = 1;
	}else{
	for(int i=2;i<=n;i++){
		resp = v1 + v2;
		if(i%2==0){
			v1 = resp;
		}else{
			v2 = resp;
		}
	}
	}
	cout << resp << "\n";
}