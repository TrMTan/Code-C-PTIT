#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, i, dem = 0;
		scanf("%d", &n);
		for(i = 1; i <= sqrt(n); i++){
			if(n % i == 0){
				if(i % 2 == 0){
					dem++;
				}
				if(n / i % 2 == 0){
					dem++;
				}
				if(i % 2 == 0 && i * i == n){
					dem--;
				}
			}
		}
		printf("%d\n", dem);
	}
}
