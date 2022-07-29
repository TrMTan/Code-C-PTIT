#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[20];
		scanf("%s", s);
		int i, j, check = 1;
		for(i = 0 ; i < strlen(s); i++){
			for(j = i + 1; j < strlen(s); j++){
				if(s[i] > s[j]){
					check = 0;
				}
			}
		}
		if(check == 1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
