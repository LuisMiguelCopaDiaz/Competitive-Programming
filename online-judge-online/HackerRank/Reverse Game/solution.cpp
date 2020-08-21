#include <bits/stdc++.h>

using namespace std;

int solve(int N, int K) {
	int i = 0;
	int end = N - 1;
	int start = 0;
	int result[100000];
	int find = -1;
	while ( i < N) {
		if (i % 2 == 0) {
			result[i] = end;
			end--;
		}
		else {
			result[i] = start;
			start++;
		}
		if ( result[i] == K)
		{
			find = i;
			i = N;
		}
		i++;
	}
	return find;
}


int main() {
	int T, N, K;
	int result[100000];
	scanf("%d", &T);
	int i = 0;
	while (i < T) {
		scanf("%d %d", &N, &K);
		result[i] = solve(N, K);
		i++;
	}
	i = 0;
	while (i < T) {
		printf("%d\n", result[i]);
		i++;
	}
	return 0;
}
