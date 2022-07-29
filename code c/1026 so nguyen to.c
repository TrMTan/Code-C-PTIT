#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, i;
		scanf("%d", &n);
		int check = 1;
		for(i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				check = 0;
			}
		}
		if(check == 1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}	
}
