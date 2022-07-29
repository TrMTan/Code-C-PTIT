#include<stdio.h>

int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		int point = 1;
		for(j = 1; j <= 2 * i - 1; j++){
			if(i > j){
				printf("%d", point);
				point += 2;
			}else{
				printf("%d", point);
				point -= 2;
			}
		}
		printf("\n");
	}
}
