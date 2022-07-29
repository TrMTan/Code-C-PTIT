#include<stdio.h>
#include<math.h>

int check[2*1000000 + 1] = {0};

void sangnt(){
	int i, j;
	for(i = 2; i*i <= 2*1000000; i++){
		if(check[i] == 0){
			for(j = i*i; j <= 2*1000000; j+=i){
				if(check[j] == 0){
					check[j] = i;
				}
			}
		}
	}
	for(i = 2; i <= 2*1000000; i++){
		if(check[i] == 0){
			check[i] = i;
		}
	} 
}

int sum(int n){
	int s = 0;
	while(n > 1){
		s += check[n];
		n /= check[n];
	}
	return s;
}

int main(){
	int t;
	scanf("%d", &t);
	sangnt();
	long long tong = 0;
	while(t--){
		int n;
		scanf("%d", &n);
		tong += sum(n);
	}
	printf("%lld", tong);
}
