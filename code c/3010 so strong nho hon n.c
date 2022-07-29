#include<stdio.h>

int gt(int n){
	int i, res = 1;
	for(i = 1; i <= n; i++){
		res *= i;
	}
	return res;
}

int strong(int n){
	int tong = 0, a = n;
	while(n > 0){
		tong = tong + gt(n % 10);
		n /= 10;
	}
	if(tong == a)
		return 1;
	return 0;
}

int main(){
	int n, i;
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		if(strong(i) == 1){
			printf("%d ", i);
		}
	}
}
