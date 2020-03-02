#include <bits/stdc++.h>

using namespace std;

int main (){
	string s;
	int n;
	cin >> n;
	int i;
	int cont = 0;
	bool c = true;
	while(n>=0){
		//getchar();
		getline(cin, s);
		/*if((int)s.size()==0){
			n--;
		}*/
		for(i=0;i<(int)s.size();i++){
			//cout << s[i];
			//puts("");
			
			if(s[i]=='{'){
				cont++;
			}else if(s[i]=='}'){
				cont--;
			}
			if(cont<0){
				c = false;
			}
			//6cout << cont << endl;
		}
		
		
		n--;
	}
	
	if(c){
		if(cont==0){
			cout << "S\n";
		}else{
			cout << "N\n";
		}
	}else{
		cout << "N\n";
	}
	
	return 0;
}