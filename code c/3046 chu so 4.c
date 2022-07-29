#include<stdio.h>
#include<math.h>

int check(int n){
	int m = n, res = 0, sum = 0;
	while(n > 0){
		int x = n % 10;
		if(x == 4) return 0;
		sum += x;
		res = res * 10 + x;
		n /= 10;
	}
	if(res == m && sum % 10 == 0) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, i;
		scanf("%d", &n);
		int a = pow(10, n - 1);
		int b = pow(10, n) - 1;
		for(i = a; i < b; i++){
			if(check(i)){
				printf("%d ", i);
			}
		}
		printf("\n");
	}
	return 0;
}
