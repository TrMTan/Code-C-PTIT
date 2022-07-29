#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void viethoa(char s[])
{
	int i;
	for(i = 0; i < strlen(s); i++){
		s[i] = toupper(s[i]);
	}
}

void chuanhoa(char s[])
{
	int i;
	s[0] = toupper(s[0]);
	for(i = 1; i < strlen(s); i++){
		s[i] = tolower(s[i]);
	}
}

int main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[100];
		gets(s);
		char res[10][10];
		int n = 0;
		char *token = strtok(s, " ");
		while(token != NULL){
			strcpy(res[n++], token);
			token = strtok(NULL, " ");
		}
		int i;
		for(i = 1; i < n - 1; i++){
			chuanhoa(res[i]);
			printf("%s ", res[i]);
		}
		chuanhoa(res[n - 1]);
		printf("%s,", res[n - 1]);
		viethoa(res[0]);
		printf(" %s\n", res[0]);
	}
}
