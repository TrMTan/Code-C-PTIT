#include<stdio.h>

int main(){
	int t, k;
	scanf("%d", &t);
	for(k = 1; k <= t; k++){
		int i, j, m, n;
		scanf("%d %d", &n, &m);
		int a[n][m];
		for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		int max = a[0][0], hang, cot;
		for(i = 0; i < n; i++){
			int sum = 0;
			for(j = 0; j < m; j++){
				sum += a[i][j];
			}if(sum > max){
				max = sum;
				hang = i;
			}
		}
		max = a[0][0];
		for(i = 0; i < m; i++){
			int sum = 0;
			for(j = 0; j < n; j++){
				if(j != hang) sum += a[j][i];
			}if(sum > max){
				max = sum;
				cot = i;
			}
		}
		printf("Test %d:\n", k);
		for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				if(i != hang && j != cot){
					printf("%d ", a[i][j]);
				}
			}
			printf("\n");
		}
	}
}
