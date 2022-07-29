#include<stdio.h>

int main(){
	int t, k;
	scanf("%d", &t);
	for(k = 1; k <= t; k++){
		int n, m, p, i;
		scanf("%d %d %d", &n, &m, &p);
		int a[n], b[m];
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(i = 0; i < m; i++){
			scanf("%d", &b[i]);
		}
		printf("Test %d:\n", k);
		for(i = 0; i < n + m; i++){
			if(i < p){
				printf("%d ", a[i]);
			}
			if(i < p + m && i >= p){
				printf("%d ", b[i - p]);
			}
			if(i >= p + m){
				printf("%d ", a[i - m]);
			}
		}
		printf("\n");
	}
}
