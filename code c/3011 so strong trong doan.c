#include <stdio.h>
#include <math.h>

int giaithua(int a){
	if(a == 0) return 1;
	if(a == 1) return 1;
	return a * giaithua(a - 1);
}

int sostrong(int n){
	int tong = 0;
	int a = n;
	while(n > 0){
		tong = tong + giaithua(n % 10);
		n/=10;
	}
	if(a == tong) return 1;
	else return 0;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a > b){
		int c = a;
		a = b;
		b = c;
	}
	for(int i = a; i <= b; i++){
		if(sostrong(i)){
			printf("%d ", i);
		}
	}
}

