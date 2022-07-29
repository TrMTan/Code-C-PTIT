#include<stdio.h>

int chiahet(int n, int k){
	int i, count = 0;
	for(i = 2; i <= n; i++){
		int tmp = i;
		while(tmp % 2 == 0){
			count++;
			tmp /= 2;
		}
	}
	return count;
}

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	if(chiahet(n, k) >= k){
		printf("Yes");
	}else{
		printf("No");
	}
}

