#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
			int n, chan = 0, le = 0;
		scanf("%d", &n);
		while(n > 0){
			if(n % 2 == 0){
				chan++;
			}else if(n % 2 == 1){
				le++;
			}
			n /= 10;
		}
		printf("%d %d\n", le, chan);
	}
}
