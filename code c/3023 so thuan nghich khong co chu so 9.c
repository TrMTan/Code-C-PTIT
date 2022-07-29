#include<stdio.h>

int check(int n){
	int res = 0, m = n, kt = 1;
	while(n > 0){
		if(n % 10 == 9){
			kt = 0;
		}
		res = res * 10 + n % 10;
		n /= 10;
	}
	if(kt == 1 && res == m){
		return 1;
	}else return 0;
}

int main(){
	int n, i, dem = 0;
	scanf("%d", &n);
	for(i = 2; i < n; i++){
		if(check(i) == 1){
			dem++;
			printf("%d ", i);
		}
	}
	printf("\n%d", dem);
	return 0;
}
