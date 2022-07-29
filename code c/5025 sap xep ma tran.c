#include<stdio.h>

int main(){
	int t, p;
	scanf("%d", &t);
	for(p = 1; p <= t; p++){
		int n, m, i, j, k,l;
		scanf("%d %d", &n, &m);
		int a[100][100];
		for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		printf("Test %d:\n", p);
		for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				for(k = i; k < n; k++){
					for(l = j; l < m; l++){
						if(a[i][j] > a[k][l]){
							int tmp = a[k][l];
							a[k][l] = a[i][j];
							a[i][j] = tmp;
						}
					}
				}
			}
		}
		for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
}
