#include <stdio.h>

int fibonacci(int n){
	if(n == 1 || n == 2 || n == 0 || n == 3) return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
	long long n, d = 0;
	scanf("%lld", &n);
	for(long long i = 0; i <= n; i++){
		if(fibonacci(i) == n){
			d++;
			break;
		}
	}
	if(d == 1) printf("1");
	else printf("0");
	return 0;
}
