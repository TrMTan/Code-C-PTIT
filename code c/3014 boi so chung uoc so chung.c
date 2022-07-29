#include <stdio.h>
#include <math.h>

long long ucln(long long a, long long b){
	while(a != b){
		if(a > b){
			a = a - b;
		}else{
			b = b - a;
		}
	}
	return a;
}

long long bcnn(long long a, long long b){
	int ketqua = ucln(a, b);
	return a * b / ucln(a, b);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b;
		scanf("%lld %lld", &a, &b);
		printf("%lld %lld\n", bcnn(a, b), ucln(a, b));
	}
}
