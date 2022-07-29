#include<stdio.h>
#include<string.h>

int main(){
	char s[51];
	gets(s);
	int i;
	for(i = 0; i < strlen(s); i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32;
		}
	}
	char xau[51][51];
	int n = 0;
	char *token = strtok(s, " ");
	while(token != NULL){
		strcpy(xau[n++], token);
		token = strtok(NULL, " ");
	}
	for(i = 0; i < n - 1; i++){
		printf("%c", xau[i][0]);
	}
	printf("%s", xau[n - 1]);
	printf("@ptit.edu.vn");
}
