#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool check(char s[]){
	int l =strlen(s);
	int i;
	for(i = 0; i <= l/2; i++){
		if(s[i] != '2' && s[i] != '3' && s[i] != '5' && s[i] != '7'){
			return 0;
		}
		if(s[i] != s[l - i - 1]){
			return 0;
		}
	}
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[500];
		scanf("%s", s);
		if(check(s) == 1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
