#include<stdio.h>
#include<math.h>

int snt(int n){
	int i;
	if(n < 2) return 0;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, i;
		scanf("%d", &n);
		for(i = 2; i <= n/2; i++){
			if(snt(i)){
				if(snt(n - i)){
					printf("%d %d ", i, n - i);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
