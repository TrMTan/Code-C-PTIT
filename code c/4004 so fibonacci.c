#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n, i;
		scanf("%lld", &n);
		long long fb[100];
		for(i = 0; i < n; i++){
			if(i == 0 || i == 1) fb[i] = 1;
			else{
				fb[i] = fb[i - 1] + fb[i - 2];
			}
		}
		printf("%lld\n", fb[n - 1]);
	}
}
