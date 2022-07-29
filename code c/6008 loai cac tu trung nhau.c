#include<stdio.h>
#include<string.h>

int main(){
	char s1[101];
	gets(s1);
	char *token = strtok(s1, " ");
	char a[101][101]; int n = 0, i;
	while(token != NULL){
		int check = 1;
		for(i = 0; i < n; i++){
			if(strcmp(token, a[i]) == 0){
				check = 0;
				break;
			}
		}
		if(check == 1){
			strcpy(a[n++], token);
		} 
		token = strtok(NULL, " ");
	}
	for(i = 0; i < n; i++){
		printf("%s ", a[i]);
	}
}
