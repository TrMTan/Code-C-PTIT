#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		long long a = 1, check = 0, s = 0, b;
		while(n > 0){
			int d = n % 10;
			if(d != 0 && d != 1 && d != 8 && d != 9){
				check = 1;
				break;
			}else{
				if(d == 1) b = 1;
				if(d == 0 || d == 9 || d == 8) b = 0;
			}
			s += a * b;
			a *= 10;
			n /= 10; 
		}
		if(check == 1 || s == 0) printf("INVALID\n");
		else printf("%lld\n", s);
	}
}
