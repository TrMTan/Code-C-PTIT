#include<stdio.h>

int main(){
	int n, i, j;
	scanf("%d", &n);
	int a[n][n];
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i = 0; i < n; i++){
		int tmp = a[i][i];
		a[i][i] = a[i][n - i -1];
		a[i][n - i - 1] = tmp;
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
