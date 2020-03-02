#include <bits/stdc++.h>

using namespace std;


int main (){
	int n, k;
	cin >> n >> k;
	int N = n;
	int i, j;
	vector<int> v;
	vector<int> z;
	int x;
	for(i=0;i<k;i++){
		cin >> x;
		v.push_back(x);
	}
	for(i=0;i<n;i++){
		z.push_back(i+1);
		//cout << z[i] << " ";
	}
	
	for(i=0;i<k;i++){
		for(j=2;j<=n;j++){
			if(z[j]%v[i]==0){
				z.erase();
				N--;
			}
		}
		}
	
	/*for(i=2;i<=n;i++){
		for(j=0;j<k;j++){
		if(i%v[j]==0){
			N--;
			break;
		}
	}
	}*/
	
	cout << N << "\n";
		
}