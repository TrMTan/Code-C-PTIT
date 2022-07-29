#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int a = 0;
		for(int k = n - i - 1; k > 0; k--){
			printf("~");
		}
		for(int j = 1; j <= i + 1; j++){
			a+=2;
			printf("%d", a);
		}
		for(int j = i + 1; j <= 2*i; j++){
			a-=2;
			printf("%d", a);
		}
		printf("\n");
	}
	return 0;
}
