#include<stdio.h>

int dem(int n, int p){
	int i, count = 0;
	for(i = p; i <= n; i += p){
		int tmp = i;
		while(tmp % p == 0){
			count ++;
			tmp /= p;
		}
	}
	return count;
}

int main(){
	int t, i;
	scanf("%d", &t);
	for(i = 1; i <= t; i++){
		int n, p;
		scanf("%d %d", &n, &p);
		printf("%d\n", dem(n, p));
	}
}
