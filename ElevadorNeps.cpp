#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	int v[10001];
	int i;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &v[i]);
	}
	int j, aux;
	for(i=1;i<n;i++){
		for(j=1;j<n;j++){
			if(v[j]<v[j-1]){
			aux = v[j];
			v[j] = v[j-1];
			v[j-1] = aux;
			}
		}
	}
	int ok = 1;
	if(v[0]>8){
		ok = 0;
	}
	for(i=1;i<n;i++){
		if((v[i]-v[i-1])>8){
			ok = 0;
			break;
		}
	}
	if(ok==0){
		printf("N\n");
	}else{
		printf("S\n");
	}
}