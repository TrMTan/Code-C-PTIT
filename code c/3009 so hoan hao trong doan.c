#include<stdio.h>
#include<math.h>

int shh(int n){
	int tong = 0, i;
	if(n == 1) return 0;
	for(i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			if(i * i == n || i == 1){
				tong += i;
			}else{
				tong = tong + i + n / i;
			}
		}
	}
	if(tong == n) return 1;
	else return 0;
}

int main(){
	int a, b, i;
	scanf("%d %d", &a, &b);
	if(a > b){
		int tmp = a;
		a = b;
		b = tmp;
	}
	for(i = a; i <= b; i++){
		if(shh(i) == 1){
			printf("%d ", i);
		}
	}
}
