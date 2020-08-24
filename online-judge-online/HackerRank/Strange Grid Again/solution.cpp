#include <bits/stdc++.h>

using namespace std;

long long solve( long long r, int c) {
	long long result;
	result = (((r -1) / 2)) * 10;
	if ( r % 2 == 0) {
		result = result + ( c * 2) - 1;
	}
	else {
		result = result + (c * 2 ) - 2;
	}
	return result;
}

int main(){

    long long r;
    int c;
    scanf("%lld %d", &r, &c);
    printf("%lld\n", solve(r,c));
    
    return 0;
}
