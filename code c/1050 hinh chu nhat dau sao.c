#include<stdio.h>

int main(){
	int a, b, i, j;
	scanf("%d %d", &a, &b);
	for(i = 1; i <= b; i++){
		for(j = 1; j <= a; j++){
			if(i == 1 || j == 1 || j == a || i == b){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
