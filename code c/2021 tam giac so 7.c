#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int d = i;
		int m = n - 1;
		for(int j = 1; j <= i ;j++){
			printf("%d ", d);
			d += m ;
			m--;
		}
		printf("\n");
	}
}
