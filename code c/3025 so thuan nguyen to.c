#include<stdio.h>
#include<math.h>

int snt(int n){
	if(n < 2) return 0;
	int i;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int csnt(int n){
	int sum = 0;
	while(n > 0){
		int d = n % 10;
		sum += d;
		if(d != 2 && d != 3 && d != 5 && d != 7){
			return 0;
		}
		n /= 10;
	}
	return snt(sum);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b, i, count = 0;
		scanf("%d %d", &a, &b);
		for(i = a; i <= b; i++){
			if(csnt(i) && snt(i)){
				count++;
			}
		}
		printf("%d\n", count);
	}
}
