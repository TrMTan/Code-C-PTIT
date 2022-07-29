#include<stdio.h>

int main(){
	int n, i, j, k;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		int a = -1;
		for(k = n - i - 1; k > 0; k--){
			printf("~");
		}
		for(j = 1; j <= i + 1; j++){
			a += 2;
			printf("%d", a);
		}
		for(j = i + 1; j < 2 * i + 1; j++){
			a -= 2;
			printf("%d", a);
		}
		printf("\n");
	}
}
