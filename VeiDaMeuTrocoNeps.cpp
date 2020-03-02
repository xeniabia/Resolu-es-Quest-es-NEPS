#include <bits/stdc++.h>
using namespace std;

int num_moedas(int N, int M, int m[]) {
    int dp[N+1];

    dp[0] = 0;

    for(int i=1; i<=N; i++) {
        
        dp[i] = 1000000;

        for(int j=0; j<M; j++) {
            if(i-m[j] >= 0) {
                dp[i] = min(dp[i], dp[ i-m[j] ]+1);
            }
        }
    }

    // solução
    return dp[N];
}

int main (){
	int N, M;
	int i;
	int m[1001];
	scanf("%d %d", &N, &M);
	for(i=0;i<N;i++){
		scanf("%d", &m[i]);
	}
	if(num_moedas(M, N, m)==1000000){
		printf("N\n");
	}else{
		printf("S\n");
	}
	
}