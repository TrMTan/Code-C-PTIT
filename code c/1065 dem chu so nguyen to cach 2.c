#include<stdio.h>
#include<string.h>

int main(){
	int i;
	char s[11];
	int d[10] = {0};
	scanf("%s", s);
	for(i = 0; i < strlen(s); i++){
		int tp = s[i] - '0';
		if(tp == 2 || tp == 3 || tp == 5 || tp == 7){
			d[tp]++;
		}
	}
	for(i = 0; i < strlen(s); i++){
		int tp = s[i] - '0';
		if(d[tp] > 0){
			printf("%d %d\n", tp, d[tp]);
			d[tp] = 0;
		}
	}
}
