#include<stdio.h>
#include<math.h>

int main(){
	int n, i, tong = 1;
	scanf("%d", &n);
	for(i = 2; i < n; i++){
		if(n % i == 0){
			tong += i;
		}
	}
	if(tong == n){
		printf("1");
	}else{
		printf("0");
	}
}
