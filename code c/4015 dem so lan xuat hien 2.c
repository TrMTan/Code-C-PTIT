#include<stdio.h>

int check[100000] = {0};

int main(){
	int t, k;
	scanf("%d", &t);
	for(k = 1; k <= t; k++){
		int n, i;
		scanf("%d", &n);
		int a[n];
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
			check[a[i]]++;
		}
		printf("Test %d:\n", k);
		for(i = 0; i < n; i++){
			if(check[a[i]] != 0){
				printf("%d xuat hien %d lan\n", a[i], check[a[i]]);
				check[a[i]] = 0;
			}
		}
	}
}
