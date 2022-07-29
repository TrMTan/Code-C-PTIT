#include<stdio.h>

int main(){
	int n, m, i;
	scanf("%d %d", &n, &m);
	int a[100], b[100];
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i < m; i++){
		scanf("%d", &b[i]);
	}
	int k;
	scanf("%d", &k);
	for(i = 0; i < n + m; i++){
		if(i < k){
			printf("%d ", a[i]);
		}
		if(i < k + m && i >= k){
			printf("%d ", b[i - k]);
		}
		if(i >= k + m){
			printf("%d ", a[i - m]);
		}
	}
}
