#include <stdio.h>

long long ucln(long long a, long long b){
	while(a != b){
		if(a > b){
			a = a - b;
		}else{
			b = b - a;
		}
	}
	return b;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b, c, d;
		scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
		if(ucln(a, b) == ucln(c, d)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}

