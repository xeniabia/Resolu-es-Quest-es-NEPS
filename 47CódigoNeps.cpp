#include <bits/stdc++.h>

using namespace std;

int main (){
	int n, v[10003];
	cin >> n;
	int i;
	for(i=0;i<n;i++){
		cin >> v[i];
	}
	v[i++] = 1;
	v[i++] = 1;
	int cont = 0;
	for(i=0;i<n;i++){
		if(v[i]==1 && v[i+1] == 0 && v[i+2] == 0){
			cont ++;
		}
	}
	cout << cont << endl;
	
}