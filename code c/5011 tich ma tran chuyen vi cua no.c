#include<stdio.h>

int main(){
	int l, t;
	scanf("%d", &t);
	for(l = 1; l <= t; l++){
		int i, j, k, m, n;
		scanf("%d %d", &n, &m);
		int a[n][m], b[m][n], c[n][n];
		for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		for(i = 0; i < m; i++){
			for(j = 0; j < n; j++){
				b[i][j] = a[j][i];
			}
		}
		printf("Test %d:\n", l);
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				c[i][j] = 0;
				for(k = 0; k < m; k++){
					c[i][j] += a[i][k]*b[k][j];
				}
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
	}
}
