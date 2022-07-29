#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int snt(int n){
	int i;
	if(n < 2) return 0;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int thuannghich(int n){
	int tong = 0, m = n;
	while(n > 0){
		tong = tong * 10 + n % 10;
		n /= 10;
	}
	if(tong == m){
		return 1;
	}
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b, dem = 0, i;
		scanf("%d %d", &a, &b);
		for(i = a; i <= b; i++){
			if(snt(i) == 1 && thuannghich(i) == 1){
				dem++;
				printf("%d ", i);
				if(dem == 10){
					printf("\n");
					dem = 0;
				}
			}
			
		}
		printf("\n");
	}
}

