#include<stdio.h>

int main(){
	int n, chan = 0, le = 0;
	scanf("%d", &n);
	while(n > 0){
		if(n % 2 == 0){
			chan++;
		}else if(n % 2 == 1){
			le++;
		}else{
			printf("0");
		}
		n /= 10;
	}
	printf("%d %d", le, chan);
}
