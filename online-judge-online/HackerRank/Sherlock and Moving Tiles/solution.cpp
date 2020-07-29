#include <bits/stdc++.h>

using namespace std;

double solve(long long L, long long S1, long long S2, long long q)
{
	return (double) sqrt(2.0) * (L - sqrt(q)) / abs(S2 - S1);
}


int main() {
	
	long long L, S1, S2;
	int Q;
	long long q;
	double result[100000];
	scanf("%lld %lld %lld", &L, &S1, &S2);
	scanf("%d", &Q);
	int i = 0;
	while(i < Q)
	{
		scanf("%lld",&q);
		result[i] = solve(L,S1,S2,q);
		i++;
	}
	i = 0;
	while (i < Q)
	{
		printf("%.4f\n", result[i]);
		i++;
	}
	return 0;
	
}
