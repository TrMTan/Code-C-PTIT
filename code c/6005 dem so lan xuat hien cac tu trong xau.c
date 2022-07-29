#include<stdio.h>
#include<string.h>

int main(){
	char s[101];
	gets(s);
	int i, j;
	for(i = 0; i < strlen(s); i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32;
		}
	}
	char *token = strtok(s, " ");
	char a[101][101]; 
	int n = 0;
	while(token != NULL){
		strcpy(a[n++], token);
		token = strtok(NULL, " ");
	}
	int b[100] = {0};
	for(i = 0; i < n; i++){
		if(b[i] == 0){
			int dem = 1;
			for(j = i + 1; j < n; j++){
				if(strcmp(a[i], a[j]) == 0){
					dem++;
					b[j] = 1;
				}
			}
			printf("%s %d\n", a[i], dem);
		}
	}
}
