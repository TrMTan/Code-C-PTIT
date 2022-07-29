#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int tong = 0, tmp;
	while(n > 0){
		tmp = n % 10;
		tong += tmp;
		n /= 10;
	}
	printf("%d", tong);
}
