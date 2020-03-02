#include <bits/stdc++.h>

using namespace std;


int main (){
	string d, n, s;
	cin >> d >> n;
	int i;
	while(n[0]!='0'){
		int j = 0;
		for(i=0;i<(int)n.size();i++){
			if(n[i]!=d[0]){
				s[j] = n[i];
				j++;
			}
		}
		for(i=0;i<j;i++){
			if(s[i]=='0' && i!=j-1){
			}else{
				cout << s[i];
			}
		}
		if(j==0){
			cout << "0";			
		}
		cout << "\n";
		cin >> d >> n;
	}
	return 0;
}
