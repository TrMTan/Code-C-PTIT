#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, tmp, tong = 0;
		scanf("%d", &n);
		while(n > 0){
			tmp = n % 10;
			tong += tmp;
			n /= 10;
		}
		printf("%d\n", tong);
	}
}
