#include <bits/stdc++.h>

using namespace std;


int main (){
	int n;
	//int i, j;
	//int v[1001][1001];
	cin >> n;
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if(n%2==1){
		cout << "N\n";
	}else{
		int m = n/2;
		if((x1<=m && x2>m || y1<=m && y2>m) || (x2<=m && x1>m || y2<=m && y1>m) || (x1<=m && x2>m || y2<=m && y1>m) && (x2<=m && x1>m || y1<=m && y2>m)){
			cout << "S\n";
		}else{
		cout << "N\n";	
		}
	}
}
