#include<stdio.h>

int main(){
	int n, tich = 1, tmp;
	scanf("%d", &n);
	while(n > 0){
		tmp = n % 10;
		tich *= tmp;
		n /= 10;
	}
	printf("%d", tich);
}
