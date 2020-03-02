#include <bits/stdc++.h>

using namespace std;

int main (){
	int n;
	cin >> n;
	int v[100000];
	int i;
	int soma = 0;
	for(i=0;i<n;i++){
		cin >> v[i];
		soma += v[i];
	}
	cout << soma << "\n";
}