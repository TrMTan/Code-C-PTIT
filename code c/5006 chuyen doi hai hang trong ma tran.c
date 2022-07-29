#include<stdio.h>

int main(){
	int m, n;
	scanf("%d%d", &m, &n);
	int a[m][n];
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int x, y;
	scanf("%d%d", &x, &y);
	for(j = 0; j < n; j++){
		int tmp = a[x - 1][j];
		a[x - 1][j] = a[y - 1][j];
		a[y - 1][j] = tmp;
 }
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
