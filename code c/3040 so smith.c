#include <stdio.h>
#include <math.h>

int tongchuso(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n/=10;		
	}
	return sum; 
}

int smith(int n){
	int sum1 = tongchuso(n);
	int tong = 0;
	int tmp = n;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			tong += tongchuso(i);
			n /= i;
		}
	}
	if(tmp == n) return 0;
	if(n != 1){
		tong += tongchuso(n);
	}
	return sum1 = tong;
}

int main(){
	int n;
	scanf("%d", &n);
	if(tongchuso(n) == smith(n)){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}
