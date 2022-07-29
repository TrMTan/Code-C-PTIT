#include <stdio.h>
#include <math.h>

int snt(int n){
	int check = 0;
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			check = 1;
			break;
		}
	}
	if(check == 1) return 0;
	else return 1;
}

int tong(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n/=10;
	}
	return sum;
}

int main(){
	int n;
	scanf("%d", &n);
	int count = 0;
	for(int i = 5; i < n; i++){
		if(tong(i) % 5 == 0 && snt(i) == 1){
			count++;
			printf("%d ", i);
		}
	}
	printf("\n%d", count);
}
