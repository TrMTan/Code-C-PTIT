#include<stdio.h>

int check[100000] = {0};

int main(){
	int n, i;
	scanf("%d", &n);
	int a[n];
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
		check[a[i]]++;
	}
	for(i = 0; i < n; i++){
		if(check[a[i]] != 0){
			printf("%d %d\n", a[i], check[a[i]]);
			check[a[i]] = 0;
		}
	}
}
