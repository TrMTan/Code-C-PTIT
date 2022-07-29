#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int d;
		if(i % 2 == 0) d = i * (i + 1)/2;
		else d = i * (i + 1)/2 - i + 1;
		for(int j = 1; j <= i; j++){
			if(i % 2 == 0) printf("%c ", 96 + d--);
			else printf("%c ", 96 + d++);
		}
		printf("\n");
	}
}
