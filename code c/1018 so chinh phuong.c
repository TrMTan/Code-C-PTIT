#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int p = sqrt(n);
		if(p * p == n){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
