#include<stdio.h>

int main(){
	int t, k;
	scanf("%d", &t);
	for(k = 1; k <= t; k++){
		int n;
		scanf("%d", &n);
		int a[101][101];
		int i, j, gt = n * n, h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
		while(h1 <= h2 && c1 <= c2){
			for(i = c1; i <= c2; i++){
				a[h1][i] = gt;
				--gt;
			}
			++h1;
			for(i = h1; i <= h2; i++){
				a[i][c2] = gt;
				--gt;
			}
			--c2;
			if(c1 <= c2){
				for(i = c2; i >= c1; i--){
					a[h2][i] = gt;
					--gt;
				}
				--h2;
			}
			if(h1 <= h2){
				for(i = h2; i >= h1; i--){
					a[i][c1] = gt;
					--gt;
				}
				++c1;
			}
		}
		printf("Test %d:\n", k);
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
}
