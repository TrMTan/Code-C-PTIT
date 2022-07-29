#include<stdio.h>
#include<math.h>

int shh(int n){
	int i, tong = 0, a = n;
	for(i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			if(i * i == n || i == 1){
				tong += i;
			}else{
				tong = tong + i + n / i;
			}
		}
	}
	if(tong == a) return 1;
	else return 0;
}

int main(){
	int n, i;
	scanf("%d", &n);
	for(i = 2; i < n; i++){
		if(shh(i) == 1){
			printf("%d ", i);
		}
	}
}
