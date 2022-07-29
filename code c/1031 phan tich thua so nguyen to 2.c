#include<stdio.h>
#include<math.h>

int main(){
	int n, i;
	scanf("%d", &n);
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			printf("%d", i);
			n /= i;
			break;
		}
	}
	for(i = 2; i <= n; i++){
		while(n % i == 0){
			printf("x%d", i);
			n /= i;
		}
	}
}
