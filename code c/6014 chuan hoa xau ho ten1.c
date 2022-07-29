#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void chuanhoa(char s[]){
	int i;
	s[0] = toupper(s[0]);
	for(i = 1; i < strlen(s); i++){
		s[i] = tolower(s[i]);
	}
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[1000], a[105][105];
		int n = 0, i;
		gets(s);
		char *token = strtok(s, " ");
		while(token != NULL){
			strcpy(a[n], token); ++n;
			token = strtok(NULL, " ");
		}
		for(i = 0; i < n; i++){
			chuanhoa(a[i]);
			printf("%s ", a[i]);
		}
		printf("\n");
	}
}
