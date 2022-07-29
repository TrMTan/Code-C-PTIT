#include<stdio.h>
#include<math.h>

int tong(int n){
	int i;
	int sum = 0;
	for(i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			sum += i;
			n /= i;
		}
	}
	if(n != 1){
		sum += n;
	}
	return sum;
}

int main(){
	int n, i;
	scanf("%d", &n);
	long long sum = 0;

	for(i = 0; i < n; i++){
		int m;
		scanf("%d", &m);
		sum += tong(m);
	}
	
	printf("%lld", sum);
}
