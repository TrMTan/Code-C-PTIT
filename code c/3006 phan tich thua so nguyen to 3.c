#include<stdio.h>
#include<math.h>

int check(int n){
	int i;
	for(i = 2; i <= sqrt(n); i++){
		int count = 0;
		if(n % i == 0){
			while(n % i == 0){
				count++;
				n /= i;
			}
			printf(" %d(%d)", i, count);
		}
	}
	if(n != 1) printf(" %d(1)", n);
	printf("\n");
}

int main(){
	int t, i;
	scanf("%d", &t);
	for(i = 1; i <= t; i++){
		int n; 
		scanf("%d", &n);
		printf("Test %d:", i);
		check(n);
	}
}

