#include<stdio.h>

int ucln(long long a, long long b){
	while(a != b){
		if(a > b){
			a = a - b;
		}else{
			b = b - a;
		}
	}
	return a;
}

int bcnn(long long a, long long b){
	return a * b / ucln(a, b);
}

int main(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld\n%lld", ucln(a, b), bcnn(a, b));
}
