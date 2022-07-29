#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int d = -1;
		for(int j = 1; j <= i + 1; j++){
			d+=2;
			printf("%c",63 + d);
		}
		for(int j = i + 1; j < 2 * i + 1; j++){
			d-=2;
			printf("%c",63 + d);
		}
		printf("\n");
	}
}
