#include<stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	int a[100];
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int k;
	scanf("%d", &k);
	for(i = 0; i < k; i++){
		printf("%d ", a[n + i - k]);
	}
	for(i = k; i < n; i++){
		printf("%d ", a[i - k]);
	}
}
