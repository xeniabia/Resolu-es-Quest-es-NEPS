#include <bits/stdc++.h>

using namespace std;

int main (){
	char s[51];
	cin >> s;
	char c;
	cin >> c;
	int i =0;
	int cont = 0;
	for(i=0;i<50;i++){
		if(s[i] == c){
			cont ++;
		}
		//cout << cont;
	}
	cout << cont << "\n";
}