#include<stdio.h>
int max(int a, int b){
	return a > b ? a : b;
}
int main(){
	int a, b, i, j;
	scanf("%d %d", &a, &b);
	for(i = 1; i <= a; i++){
		int point = max(a, b);
		for(j = 1; j <= b; j++){
			if(j < i){
				printf("%c", 96 + point--);
			}else{
				printf("%c", 96 + point);
			}
		}
		printf("\n");
	}
}
