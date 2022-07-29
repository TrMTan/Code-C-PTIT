#include<stdio.h>
#include<math.h>

int main(){
	int a, b, i;
	scanf("%d %d", &a, &b);
	int c1 = ceil(sqrt(a)), c2 = floor(sqrt(b));
	printf("%d\n", c2 - c1 + 1);
	for(i = c1; i <= c2; i++){
		printf("%d\n", i * i);
	}
}
