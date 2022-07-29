#include<stdio.h>
#include<math.h>

int check(long long n){
	long long chan = 0, le = 0;
	if(n % 2 == 1) return 0;
	while(n > 0){
		int tmp = n % 10;
		if(n % 2 == 0) chan++;
		if(n % 2 != 0) le++;
		n /= 10;
	}
	if(chan > le) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
}
