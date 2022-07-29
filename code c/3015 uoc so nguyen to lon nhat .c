#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n, x, i;
		scanf("%lld", &n);
		for(i = 2; i <= sqrt(n); i++){
			while(n % i == 0){
				x = i;
				n/=i;
			}
		}
		if(n > 1) x = n;
		printf("%lld\n", x);
	}
}
