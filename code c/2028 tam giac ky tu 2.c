#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int point = 2 * i - 1;
		for(int j = 1; j <= n - i + 1; j++){
			printf("%c",64 + point);
			point += 2;
		}
		printf("\n");
	}
}
