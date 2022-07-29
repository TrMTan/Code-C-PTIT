#include<stdio.h>

int minvl(int a, int b){
	return a < b ? a : b;
}
int main(){
	int a, b, i, j;
	scanf("%d %d", &a, &b);
	for(i = 1; i <= a; i++){
		printf("%d", i); // in ra so dau tien
		for(j = 1; j < b; j++){
			if(j <= b - i){
				printf("%d", i + j);
			}else{
				int min = minvl(i - 1, b - 1);
				while(j < b){
					printf("%d", min--);
					++j;
				}
			}
		}
		printf("\n");
	}
}
