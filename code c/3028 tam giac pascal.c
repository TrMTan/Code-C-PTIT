#include<stdio.h>

int giaithua(int n){
	int f = 1, i;
	for(i = n; i >= 1; i--){
		f *= i;
	}
	return f;
}

int pascal(int n, int k){
	return giaithua(n)/(giaithua(k)*giaithua(n - k));
}

int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		for(j = 0; j <= i ; j++){
			printf("%d ", pascal(i, j));
		}
		printf("\n");
	}
}
