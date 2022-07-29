#include<stdio.h>

int main(){
	int n, i, j;
	scanf("%d", &n);
	int a[100];
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++){
		int check = 1;
		for(j = 0; j < i; j++){
			if(a[i] == a[j]){
				check = 0;
				break;
			}
		}
		if(check == 1){
			printf("%d ", a[i]);
		}
	}
}
