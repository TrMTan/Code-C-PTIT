#include<stdio.h>

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void sxa(int a[101], int n){
	int i, j;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(a[j] < a[i]){
				swap(&a[i], &a[j]);
			}
		}
	}
}

void sxb(int b[101], int n){
	int i, j;
	for(i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(b[j] > b[i]){
				swap(&b[i], &b[j]);
			}
		}
	}
}

int main()
{
	int t, k;
	scanf("%d", &t);
	for(k = 1; k <= t; k++){
		int n, i;
		scanf("%d", &n);
		int a[101], b[101];
		sxa(a, n);
		sxb(b, n);
		printf("Test %d:\n", k);
		for(i = 0; i < n; i++){
			printf("%d %d ", a[i], b[i]);
		}
		printf("\n");
	}
}
