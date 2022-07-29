#include<stdio.h>
#include<math.h>

int snt(int n){
	int i;
	if(n < 2) return 0;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n, i, j, tong = 0;
	scanf("%d", &n);
	int a[50][50];
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i = 0; i < n; i++){
		for(j = i; j < n; j++){
			if(snt(a[i][j]) == 1){
				tong += a[i][j];
			}
		}
	}
	printf("%d", tong);
}
