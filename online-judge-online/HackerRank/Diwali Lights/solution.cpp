#include <bits/stdc++.h>

using namespace std;

int solve(int N) {
	int i = 0;
	int result = 1;
	while (i < N) {
		result *= 2;
		result = result % 100000;
		i++;
	}
	return result;
}

int main(){
    int T;
    int N;
    int result[1000];
    int i = 0;
    
    scanf("%d", &T);
    while (i < T) {
		scanf("%d", &N);
		result[i] = solve(N) - 1;
		i++;
	}
	
	i = 0;
	while (i < T) {
		printf("%d\n", result[i]);
		i++;
	}
    return 0;
}
