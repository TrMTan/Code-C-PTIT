#include<stdio.h>

int main(){
	int n, i, j;
	scanf("%d", &n);
	int a[2*n-1][2*n-1];
	for(i = n; i >= 0; i--){
		for(j = n - i; j <= n + i - 2; j++){
			a[n - i][j] = i;
			a[j][n - i] = i;
			a[n + i - 2][j] = i;
			a[j][n + i - 2] = i;
		}
	}
	for(i = 0; i < 2*n-1; i++){
		for(j = 0; j < 2*n-1; j++){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}
