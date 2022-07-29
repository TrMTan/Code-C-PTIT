#include<stdio.h>

int main(){
	int a, b, i, j;
	scanf("%d %d", &a, &b);
	for(i = 1; i <= a; i++){
		int point = i;
		for(j = 1; j <= b; j++){
			if(j <= b - i){
				printf("%d", point++);
			}else{
				printf("%d", point--);
			}
		}
		printf("\n");
	}
}
