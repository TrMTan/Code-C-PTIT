#include<stdio.h>

int check(int n){
	int sum = 0;
	while(n > 0){
		int tmp = n % 10;
		sum += tmp;
		n /= 10;
	}
	if(sum % 10 == 0){
		return 1;
	}
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(check(n)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
