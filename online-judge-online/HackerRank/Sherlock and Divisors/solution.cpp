#include <bits/stdc++.h>

using namespace std;

int solve(long long N) {
	int cont = 0;
	int i = 1;
	while( i <= sqrt(N)) {
		if( N % i == 0) {
			if( i == N/i ) {
				if ( i % 2 == 0) {
					cont++;
				}
			}
			else {
				if(i % 2 == 0) {
					cont++;
				}
				if((N/i) % 2 == 0) {
					cont++;
				}
			}
		}
		i++;
	}
	return cont;
}

int main(){
	int T;
	long long N;
	scanf("%d", &T);
	int i = 0;
	int result[100];
	
	while (i < T) {
		scanf("%lld", &N);
		result[i] = solve(N);	
		i++;
	}
	
	i = 0;
	while (i < T) {
		printf("%d\n", result[i]);
		i++;
	}
	
    return 0;
}
