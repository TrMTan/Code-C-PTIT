#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[20];
		scanf("%s", s);
		int i, check = 1;
		for(i = 0; i < strlen(s); i++){
			int tg = s[i] - '0'; // chuyen so ve ky tu
			if(tg % 2 != 0){
				check = 0;
				break;
			}
		}
		if(check == 1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
