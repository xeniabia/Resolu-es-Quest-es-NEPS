#include <bits/stdc++.h>

using namespace std;

int main (){
	int l, c;
	cin >> l >> c;
	cout << (l*c + (l-1)*(c-1)) << "\n" << 2*((l-1)+(c-1)) << "\n";
}