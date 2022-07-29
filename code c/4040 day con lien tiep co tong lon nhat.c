#include<stdio.h>

long long max(long long a, long long b){
	if(a > b){
		return a;
	}
	return b;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		int n, i;
		scanf("%d", &n);
		int a[n];
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		long long sum1 = 0, sum2 = 0;
		for(i = 0; i < n; i++){
			sum1 += a[i];
			sum2 = max(sum1, sum2);
			if(sum1 < 0){
				sum1 = 0;
			}
		}
		printf("%lld\n", sum2);
	}
}
