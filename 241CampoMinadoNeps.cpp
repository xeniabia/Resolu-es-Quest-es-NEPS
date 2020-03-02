#include <bits/stdc++.h>

using namespace std;


int main (){
	int n;
	int i;
	cin >> n;
	vector<int> v;
	int x;
	for(i=0;i<n;i++){
		cin >> x;
		v.push_back(x);
	}

	vector<int> v2;	
	
	for(i=0;i<n;i++){
		v2.push_back(0);
	}
	for(i=0;i<n;i++){
		if(i==0){
			if(v[i]==1){
				v2[i]++;
			}
			if(v[i+1]==1){
				v2[i]++;
			}
		}else if(i==n-1){
			if(v[i-1]==1){
				v2[i]++;
			}
			if(v[i]==1){
				v2[i]++;
			}
		}else{
			if(v[i-1]==1){
				v2[i]++;
			}
			if(v[i]==1){
				v2[i]++;
			}
			if(v[i+1]==1){
				v2[i]++;
			}
		}
	}
	
	for(i=0;i<n;i++){
		cout << v2[i] << "\n";
	}
	
}