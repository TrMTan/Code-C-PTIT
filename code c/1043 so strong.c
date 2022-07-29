#include<stdio.h>

int gt(int n){
	int i, gt = 1;
	for(i = 1; i <= n; i++){
		gt *= i;
	}
	return gt;
}

int main(){
	int n;
	scanf("%d", &n);
	int sum = 0, a = n;
	while(a > 0){
		sum += gt(a % 10);
		a /= 10;
	}
	if(n == sum){
		printf("1");
	}else{
		printf("0");
	}
}
