#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int s1, s2;
		while(n > 0){
			s1 = n % 10;
			s2 = (n / 10) % 10;
			if(s1 < s2){
				break;
			}else{
				n /= 10;
			}
		}
		if(n == 0) printf("YES\n");
		else printf("NO\n");
	}
}
