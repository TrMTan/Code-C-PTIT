#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[100];
	int i, j, point;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n - 1; i++){
		point = i;
		for(j = i + 1; j < n; j++){
			if(a[j] < a[point]){
				point = j;
			}
		}
		if(point != j){
			int tmp = a[i];
			a[i] = a[point];
			a[point] = tmp;
		}
		for(j = 0; j < n; j++){
			printf("%d ", a[j]);
		}
		printf("\n");
	}
}
