#include<stdio.h>
int min(int a, int b){
	return a < b ? a : b;
}
int main(){
	int a, b, i, j;
	scanf("%d %d", &a, &b);
	for(i = a; i >= 1; i--){
		int point = min(i, b);
		for(j = 1; j <= b; j++){
			if(j <= b - i){
				printf("%c", 64 + point++);
			}else{
				printf("%c", 64 + point);
			}
		}
		printf("\n");
	}
}
