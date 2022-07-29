#include<stdio.h>
#include<math.h>

int sotn(int n){
	int res = 0, m = n, sum = 0;
	while(n > 0){
		sum += n  % 10;
		res = res * 10 + n % 10;
		n /= 10;
	}
	if(sum % 10 == 0 && res == m){
		return 1;
	}else return 0;
}
void check(){
	long long i;
	int n, count = 0;
	scanf("%d", &n);
	int a = pow(10, n - 1);
	int b= pow(10, n) - 1;
	for(i = a; i <= b; i++){
		if(sotn(i)){
			count++;
		}
	}
	printf("%d\n", count);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		check();
	}
	return 0;
}
