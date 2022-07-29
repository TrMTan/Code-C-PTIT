#include<stdio.h>

int main(){
	int n, i, j, x, pos, a[n];
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++){
		x = a[i];
		pos = i - 1;
		while(pos >= 0 && a[pos] > x){
			a[pos + 1] = a[pos];
			--pos;
		}
		a[pos + 1] = x;
		printf("Buoc %d: ", i);
		for(j = 0; j <= i; j++){
			printf("%d ", a[j]);
		}
		printf("\n");
	}
	return 0;
}
