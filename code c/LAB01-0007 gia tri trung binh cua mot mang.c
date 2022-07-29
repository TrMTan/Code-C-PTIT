#include<stdio.h>

int main(){
	int n, i, tong = 0;
	scanf("%d", &n);
	int a[n];
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++){
		tong += a[i];
	}
	printf("%.3f", 1.0 * tong / n);
}
