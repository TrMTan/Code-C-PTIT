#include<stdio.h>

int main(){
	int n, i, j, point, a[n];
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n - 1; i++){
		point = i;
		for(j = i + 1; j < n; j++){
			if(a[j] < a[point]){
				int tmp = a[j];
				a[j] = a[point];
				a[point] = tmp;		
			}
		}
		printf("Buoc %d: ", i + 1);
		for(j = 0; j < n; j++){
			printf("%d ", a[j]);
		}
		printf("\n");
	}
}
