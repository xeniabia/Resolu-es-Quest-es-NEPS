#include <bits/stdc++.h>

using namespace std;

	
//vector<int> g[10000];
//vector<int> r[]


int main (){
	
	int a, v;
	int j = 1;
	int i;
	cin >> a >> v;
	while(a!=0){
	vector<int> g[10000];
	
	for(i=0;i<v;i++){
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	
	
	int max = -1;
	
	for(i=1;i<=a;i++){
		if((int)g[i].size() > max){
			max = (int)g[i].size();
			//cout << max << endl;
		}
	}
	cout << "Teste " << j << "\n";
	for(i=1;i<=a;i++){
		//cout << (int)g[i].size() << endl;
		if((int)g[i].size() == max){
			cout << i << " ";
		}
	}
	
	/*for(i=0;i<v;i++){
		int x, y;
		cin >> x >> y;
		g[x].pop_back();
		g[y].pop_back();
	}*/
	
	cout << "\n\n";
	j++;
	cin >> a >> v;
	}
	/*int i;
	for(i=0;i<v;i++){
		
	}*/
	
	
	
	
}