#include <bits/stdc++.h>

using namespace std;

int main (){
	int n;
	int v[11][11];
	cin >> n;
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin >> v[i][j];
		}
	}
	int soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, soma5=0;
	for(i=0;i<n;i++){
		soma1 += v[i][0];
	}
	
	
	for(i=0;i<n;i++){
		soma2 = 0;
		soma3 = 0;
		for(j=0;j<n;j++){
			soma2 += v[j][i];
			soma3 += v[i][j];
		}
		if(soma2!=soma1 || soma3!=soma1){
			cout << "-1\n" << endl;
			return 0;
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
			soma4 += v[j][i];
			}
			if((i+j)==(n-1)){
			soma5 += v[j][i];	
			}
		}
	}
	
	if(soma4!=soma1 || soma5!=soma1){
			cout << "-1\n" << endl;
			return 0;
		}
	
	
	
	
	cout << soma1 << endl;
	return 0;
	
}