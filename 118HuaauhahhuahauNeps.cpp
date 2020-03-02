#include <bits/stdc++.h>

using namespace std;


int main (){
	string s;
	string c, f;
	cin >> s;
	int i;
	//int j = 0, k = 0;
	int tam = (int)s.size();
	for(i=0;i<tam;i++){
		//cout << s[i];haha
		switch(s[i]){
			case 'a':
			c.push_back(s[i]);
			f.push_back(s[i]);
				//j++;
				break;
			case 'e':
			c.push_back(s[i]);
			f.push_back(s[i]);
				//j++;
				break;
			case 'i':
			c.push_back(s[i]);
			f.push_back(s[i]);
				//j++;
				break;
			case 'o':
			c.push_back(s[i]);
			f.push_back(s[i]);
				//j++;
				break;
			case 'u':
			c.push_back(s[i]);
			f.push_back(s[i]);
				//j++;
				break;
				
		}
		}
		
		reverse(f.begin(), f.end());
		
		
		/*for(i=tam-1;i>=0;i--){
		switch(s[i]){
			case 'a':
				f[k] = 'a';
				k++;
				break;
			case 'e':
				f[k] = 'e';
				k++;
				break;
			case 'i':
				f[k] = 'i';
				k++;
				break;
			case 'o':
				f[k] = 'o';
				k++;
				break;
			case 'u':
				f[k] = 'u';
				k++;
				break;
				
		}
		}*/
		
		//int ok = 0;
		
		
		if(f == c){
			cout << "S\n";
		}else{
			cout << "N\n";
		}
		
		return 0;
		
}
