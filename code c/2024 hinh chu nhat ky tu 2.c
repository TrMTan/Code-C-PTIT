#include<stdio.h>

int main(){
	int a, b, i, j;
	scanf("%d %d", &a, &b);
	for(i = 0; i < a; i++){
		for(j = 0; j < b; j++){
			if(j < b - i){
				printf("%c",'A' + i + j);
			}else{
				printf("%c",'A' + b - j - 1);
			}
		}
		printf("\n");
	}
}
