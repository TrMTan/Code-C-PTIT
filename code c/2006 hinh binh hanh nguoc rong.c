#include<stdio.h>

int main(){
	int a, b, i, j;
	scanf("%d %d", &a, &b);
	for(i = 1; i <= a; i++){
		for(j = 1; j <= i - 1; j++){
			printf("~");
		}
		for(j = 1; j <= b; j++){
			if(i == a || j == b || j == 1 || i == 1){
				printf("*");
			}else{
				printf(".");
			}
		}
		printf("\n");
	}
}
