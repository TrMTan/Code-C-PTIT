#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, i, d = 1;
		scanf("%d", &n);
		for(i = 2; i <= n; i++){
			if(n % i == 0){
				while(n % i == 0){
					n /= i;
				}
				d *= i;
			}
		}
		printf("%d\n", d);
	}
}
