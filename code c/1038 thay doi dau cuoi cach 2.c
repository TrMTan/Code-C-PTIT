#include <stdio.h>
#include <math.h>
int main(){
	int n, first, last, swap, digit, divide;
	scanf("%d", &n);
	digit = log10(n);
	divide = pow(10, digit);
	first = n/divide;
	n %= divide;
	last = n % 10;
	n /= 10;
	swap = last*divide + n*10 + first;
	printf("%d", swap);
	return 0;
}

