#include <bits/stdc++.h>

using namespace std;

bool eh_primo(int x){
    int i;
    int u = sqrt(x);
    if(x==1){
		return false;
	}
    for(i=2;i<=u;i++){
		if(x%i==0){
			return false;			
		}
	}
	return true;
}

int main(){
    int x;

    cin>>x;

    if(eh_primo(x)){
        cout << "S" << "\n";
    }else{
        cout << "N" << "\n";
    }
}