#include <bits/stdc++.h>
#define max 1000000000
using namespace std;


long long solve(long long n) {
	return (long long)   (n % ( max + 7)) * (n % ( max + 7));
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long result[10];
	int i = 0;
	int t;
	long long n;
	scanf("%d", &t);
	
	i = 0;
	while ( i < t )
	{
		scanf("%lld", &n );
		result[i] = solve(n);
		i++;
	}
	
	i = 0;
	while ( i < t ) {
		printf("%lld\n", result[i] % ( max + 7));
		i++;
	}
	
	return 0;
}
