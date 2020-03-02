#include <bits/stdc++.h>

using namespace std;

int main (){
	int n;
	cin >> n;
	int i, j = 1;
	int v[1000];
	int cont = 2, soma = 1;
	v[0] = 1;
	for(i=2;i<=(n/2);i++){
		if(n%i==0){
			cont++;
			v[j] = i;
			soma += v[j];
			j++;
		}
	}
	v[j] = n;
	soma += v[j];
	if(n==1){
		printf("1 divisor(es): 1 \n");
		printf("Soma de divisores = 1\n");
		printf("Nao primo\n");
	}else{
		printf("%d divisor(es): ", cont);
		for(j=0;j<cont;j++){
			printf("%d ", v[j]);
		}
		printf("\nSoma de divisores = %d\n", soma);
		if(cont==2){
			printf("Primo\n");
		}else{
		printf("Nao primo\n");
		}
	}
	
}