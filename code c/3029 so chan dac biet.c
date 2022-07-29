#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n, check = 1;
		scanf("%lld", &n);
		if(n % 2 == 0){
			while(n > 0){
				if((n % 10) % 2 == 1){
					check = 0;
					break;
				}else{
					n /= 10;
				}
			}
			if(check == 1) printf("YES\n");
			else printf("NO\n");
		}else{
			printf("NO\n");
		}
	}
}
