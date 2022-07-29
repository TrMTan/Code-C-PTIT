#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool check(int n)
{
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
		long long l, r, i;
		scanf("%lld %lld", &l, &r);
		int count = 0;
		for(i = l; i <= sqrt(r); i++){
			if(check(i)){
				count++;
			}
		}
		printf("%d\n", count);
	}
}
