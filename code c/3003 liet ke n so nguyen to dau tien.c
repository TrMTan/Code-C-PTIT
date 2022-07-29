#include<stdio.h>
#include<math.h>

int snt(int n)
{
	int i;
	if(n < 2) return 0;
	for(i = 2; i <= (int)sqrt(n); i++){
		if(n % i == 0){
			return 0;
			break;
		}
	}
	return 1;
}

int main(){
	int n, i;
	scanf("%d", &n);
	for(i = 2;; i++){
		if(snt(i) == 1){
			printf("%d\n", i);
			n--;
		}
		if(n == 0){
			break;
		}
	}
}

