#include <bits/stdc++.h>

using namespace std;

int solve(long long v[], int N) {
	int i = 1;
	int maxt=1;
	int max=1;
	int number = v[0]-v[1];
	int cnumber;
	while ( i < N - 1) {
		cnumber = v[i] - v[i+1];
		if (cnumber == number) {
			max++;
		}
		if (cnumber != number || i == N - 2) {
			if ( maxt < max) {
				maxt = max;
			}
			number = cnumber;
			max = 1;
		}
		i++;
	}
	return maxt+1;
}

int main() {
	int T;
	int N;
	long long A[2000];
	int result[2000];
	scanf("%d", &T);
	int i = 0;
	while (i < T) {
		scanf("%d", &N);
		int j = 0;
		while(j < N){
			scanf("%lld", &A[j]);
			j++;
		}
		result[i] = solve(A,N);
		i++;
	}
	i = 0;
	while( i < T )
	{
		printf("Case #%d: %d\n", i+1, result[i]);
		i++;
	}
	
	return 0;
}