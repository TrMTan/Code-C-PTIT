#include<stdio.h>

int main(){
	int a, b, i, j;
	scanf("%d %d", &a, &b);
	if(a >= b){
		for(i = a; i >= 1; i--){
			int point = i;
			for(j = 1; j <= b; j++){
				if(i > j){
					printf("%d", point--);
				}else{
					printf("%d", point++);
				}
			}
			printf("\n");
		}
	}else{
		for(i = 1; i <= a; i++){
			int point = b - i + 1;
			for(j = 1; j <= b; j++){
				if(j <= b - i){
					printf("%d", point--);
				}else{
					printf("%d", point++);
				}
			}
			printf("\n");
		}
	}
}
