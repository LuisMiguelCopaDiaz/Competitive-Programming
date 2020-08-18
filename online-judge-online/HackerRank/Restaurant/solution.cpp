#include <bits/stdc++.h>

using namespace std;

int gcd (int a, int b) {
	if (a == 0) {
		return b;
	}
	return gcd(b % a, a);
}


int main() {
	int T;
	int result[1000];
	int l,b;
	scanf("%d", &T);
	int i = 0;
	while( i < T)
	{
		scanf("%d %d", &l, &b);
		result[i] = (l * b) / ( gcd(l,b) * gcd(l,b));
		i++;
	}
	i = 0;
	while( i < T)
	{
		printf("%d \n",result[i]);
		i++;
	}
	return 0;
	
}
