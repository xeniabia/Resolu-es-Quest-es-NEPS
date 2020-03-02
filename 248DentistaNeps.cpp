#include <bits/stdc++.h>

using namespace std;

int main (){
	int n;
	vector<int> x, y;
	int a, b;
	cin >> n;
	int i, j;
	for(i = 0; i<n ; i++){
		cin >> a >> b;
		x.push_back(a);
		y.push_back(b);
	}
	int aux;
	
	//sort(y.begin(), y.end());
	
	for(i=1;i<n;i++){
		for(j=1;j<n;j++){
			if(y[j]<y[j-1]){
				aux = y[j];
				y[j] = y[j-1];
				y[j-1] = aux;
				aux = x[j];
				x[j] = x[j-1];
				x[j-1] = aux;
			}
		}
	}
	
	/*for(i = 0; i<n ; i++){
		cout << x[i] << " " << y[i];
	}*/

	
	int cont= 1;
	int ok = 0;
	for(i=1;i<n;i++){
		if(x[i]>=y[ok]){
			cont++;
			ok = i;
		}
	}
	cout << cont << "\n";
}