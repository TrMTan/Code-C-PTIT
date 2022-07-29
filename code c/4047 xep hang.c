#include<stdio.h>

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int max(int a, int b){
	return a > b ? a : b;
}

int main(){
	int n, i, j, time = 0;
	scanf("%d", &n);
	int T[n], D[n];
	for(i = 0; i < n; i++){
		scanf("%d %d", &T[i], &D[i]);
	}
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(T[j] < T[i]){
				swap(&D[i], &D[j]);
				swap(&T[i], &T[j]);
			}
		}
	}
	for(i = 0; i < n; i++){
		time = max(time, T[i]) + D[i];
	}
	printf("%d", time);
}
