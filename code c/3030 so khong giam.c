#include<stdio.h>
#include<math.h>

int check(int n){
	int x = n % 10;
	n /= 10;
	while(n > 0){
		int y = n % 10;
		if(y > x) return 0;
		x = y;
		n /= 10;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, i;
		scanf("%d", &n);
		int a = pow(10, n - 1), b = pow(10, n);
		for(i = a; i < b; i++){
			if(check(i)) printf("%d ", i);
		}
		printf("\n");
	}
}
