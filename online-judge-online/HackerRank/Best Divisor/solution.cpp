#include <bits/stdc++.h>

using namespace std;

int main() {
	int number;
	scanf("%d", &number);
	int i = 2;
	int digits = 0;
	int max = 1;
	int max_number=1;
	while ( i < number + 1)
	{
		if(number%i == 0) {
			int divisor = i;
			int divisor_number = i;
			digits = 0;
			while(divisor > 0) {
				digits = digits + (divisor % 10);
				divisor = divisor / 10;
			}
			if ( max < digits)
			{
				max = digits;
				max_number = divisor_number;
			}
		}
		i++;
	}
	printf("%d\n", max_number);
	return 0;
	
}
