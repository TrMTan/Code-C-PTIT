#include<stdio.h>

int main(){
	int t, k;
	scanf("%d", &t);
	for(k = 1; k <= t; k++){
		int n, i, j;
		scanf("%d", &n);
		int a[n];
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int res = 1, cnt = 0, b[n], dem = 1;  // res: do doan dai nhat, dem: do so doan dai nhat
		b[0] = 0; cnt = 1;
		for(i = 1; i < n; i++){ 		// duyet tu pt thu nhat
			if(a[i] > a[i - 1]) ++dem;
			else dem = 1;
			if(dem > res){
				res = dem;
				b[0] = i - res + 1;
				cnt = 1;
			}else if(dem == res){
				b[cnt] = i - res + 1;
				++cnt; 
			}
		}
		printf("Test %d:\n", k);
		printf("%d\n", res);
		for(i = 0; i < cnt; i++){
			for(j = 0; j < res; j++){
				printf("%d ", a[b[i] + j]);
			}
			printf("\n");
		}
	}
}
