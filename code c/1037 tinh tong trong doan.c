#include<stdio.h>

int main(){
	int a, b, i, tong = 0;
	scanf("%d %d", &a, &b);
	if(a > b){
		int tmp = a;
		a = b;
		b = tmp;
	}
	for(i = a; i <= b; i++){
		tong += i;
	}
	printf("%d", tong);
}
