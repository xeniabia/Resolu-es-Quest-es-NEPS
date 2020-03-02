#include <bits/stdc++.h>

using namespace std;


int main (){
	int n;
	cin >> n;
	vector<double> x;
	vector<double> y;
	int x1, y1;
	int i, j;
	
	for(i=0;i<n;i++){
		cin >> x1 >> y1;
		if(x1<0){
			x1 = x1*-1;
		}
		if(y1<0){
			y1 = y1*-1;
		}
		x.push_back(x1);
		y.push_back(y1);
	}
	
	long long int cont = 0;
	
	for(i=1;i<n;i++){
	for(j=0;j<i;j++){
		if((x[i]+y[i])>=(x[j]+y[j])){
			cont++;
			
		}
	}
	}
	
	cout << cont << "\n";
	
}